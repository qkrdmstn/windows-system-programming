// é�� 13�� �Լ� ���� ���� ���

#include "stdio.h"
#include "tchar.h"
#include "windows.h"
#include <process.h>

int main()
{
	CRITICAL_SECTION gCriticalSection; //critical section obj
	InitializeCriticalSection(&gCriticalSection); //object �ʱ�ȭ
	EnterCriticalSection(&gCriticalSection); //�Ӱ迵�� ����
	//
	//�Ӱ� ����
	//
	LeaveCriticalSection(&gCriticalSection); //�Ӱ迵�� Ż��
	DeleteCriticalSection(&gCriticalSection); //object ��ȯ


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