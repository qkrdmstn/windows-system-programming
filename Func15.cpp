// é�� 15�� �Լ� ���� ���� ���

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

//Work�� Thread ������ ���� ����ü

struct __ThreadPool
{
	//Work�� ����ϱ� ���� �迭
	WORK workList[WORK_MAX];

	//Thread ������ �� Thread�� Event ������Ʈ
	WorkerThread workerThreadList[THREAD_MAX];
	HANDLE workerEventList[THREAD_MAX];

	//Work�� ���� ����
	DWORD idxOfCurrentWork;	// ��� 1���� Work Index
	DWORD idxOfLastAddedWork; // ������ �߰� Work Index + 1

	//Number of Thread;
	DWORD threadIdx;	//Pool�� �����ϴ� Thread ��
} gThreadPool;

void function(void);



WORK GetWorkFromPool(void); //������ Ǯ���� Work�� ������ �� ȣ���ϴ� �Լ��̴�.
DWORD AddWorkToPool(WORK work); //���ο� Work�� ����� �� ȣ���ϴ� �Լ��̴�.
DWORD MakeThreadToPool(DWORD numOfThread); //������ Ǯ�� ������ ���Ŀ� Ǯ�� �����带 �����ϴ� �Լ��̴�.
void WorkerThreadFunction(LPVOID pParam); //�����尡 �������ڸ��� ȣ���ϴ� �������� main �Լ��̴�.



void InitMutex(void);
void DeInitMutex(void);
void AcquireMutex(void);
void ReleaseMutex(void);
