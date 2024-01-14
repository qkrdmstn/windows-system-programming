// 챕터 13의 함수 정의 등을 기록

#include "stdio.h"
#include "tchar.h"
#include "windows.h"
#include <process.h>

int main()
{
	CRITICAL_SECTION gCriticalSection; //critical section obj
	InitializeCriticalSection(&gCriticalSection); //object 초기화
	EnterCriticalSection(&gCriticalSection); //임계영역 진입
	//
	//임계 영역
	//
	LeaveCriticalSection(&gCriticalSection); //임계영역 탈출
	DeleteCriticalSection(&gCriticalSection); //object 반환


	CancelWaitableTimer
}

CRITICAL_SECTION gCriticalSection; //critical section obj

VOID InitializeCriticalSection(
	LPCRITICAL_SECTION lpCriticalSection
);

VOID EnterCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);


VOID LeaveCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

VOID DeleteCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

LONG InterlockedIncrement(
	LONG volatile* Addend
);

LONG InterlockedDecrement(
	LONG volatile* Addend
);

int a(void)
{
	int a = 1;
	a = 2;
	a = 3;
	cout << a;
}

int a(void)
{
	int a = 3;
	cout << a;
}


void IncreaseCount()
{
	//gTotalCount++;
	InterlockedIncrement(&gTotalCount);
}

HANDLE CreateMutex(
	LPSECURITY_ATTRIBUTES lpMutexAttributes,
	BOOL bInitialOwner,
	LPCSTR lpName
);

BOOL ReleaseMutex(
	HANDLE hMutex
);

DWORD AcquireMutex(HANDLE mutex)
{
	return WaitForSingleObject(mutex, INFINITE);
}

HANDLE CreateSemaphore(
	LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
	LONG lInitialCount,
	LONG lMaximumCount,
	LPCSTR lpName
);

BOOL ReleaseSemaphore(
	HANDLE hSemaphore,
	LONG lReleaseCount,
	LPLONG lpPreviousCount
);



HANDLE CreateEvent(
	LPSECURITY_ATTRIBUTES lpEventAttributes,
	BOOL bManualReset,
	BOOL bInitialState,
	LPCSTR lpName
);

BOOL ResetEvent(
	HANDLE hEvent
);

BOOL SetEvent(
	HANDLE hEvent
);

HANDLE CreateWaitableTimer(
	LPSECURITY_ATTRIBUTES lpTimerAttributes,
	BOOL bManualReset,
	LPCSTR lpTimerName
);

BOOL SetWaitableTimer(
	HANDLE hTimer,
	const LARGE_INTEGER* lpDueTime,
	LONG lPeriod,
	PTIMERAPCROUTINE pfnCompletionRoutine,
	LPVOID lpArgToCompletionRoutine,
	BOOL fResume
);

BOOL CancelWaitableTimer(
	HANDLE hTimer
);