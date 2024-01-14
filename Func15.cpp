// 챕터 15의 함수 정의 등을 기록

#include "stdio.h"
#include "tchar.h"
#include "windows.h"
#include <process.h>

int main()
{
	
}

typedef void (*WORK) (void);

typedef struct __WorkerThread
{
	HANDLE hThread;
	DWORD idThread;
}WorkerThread;

//Work와 Thread 관리를 위한 구조체

struct __ThreadPool
{
	//Work를 등록하기 위한 배열
	WORK workList[WORK_MAX];

	//Thread 정보와 각 Thread별 Event 오브젝트
	WorkerThread workerThreadList[THREAD_MAX];
	HANDLE workerEventList[THREAD_MAX];

	//Work에 대한 정보
	DWORD idxOfCurrentWork;	// 대기 1순위 Work Index
	DWORD idxOfLastAddedWork; // 마지막 추가 Work Index + 1

	//Number of Thread;
	DWORD threadIdx;	//Pool에 존재하는 Thread 수
} gThreadPool;

void function(void);



WORK GetWorkFromPool(void); //쓰레드 풀에서 Work를 가져올 때 호출하는 함수이다.
DWORD AddWorkToPool(WORK work); //새로운 Work을 등록할 때 호출하는 함수이다.
DWORD MakeThreadToPool(DWORD numOfThread); //쓰레드 풀이 생성된 이후에 풀에 쓰레드를 생성하는 함수이다.
void WorkerThreadFunction(LPVOID pParam); //쓰레드가 생성되자마자 호출하는 쓰레드의 main 함수이다.



void InitMutex(void);
void DeInitMutex(void);
void AcquireMutex(void);
void ReleaseMutex(void);
