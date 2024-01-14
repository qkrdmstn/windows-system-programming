// 챕터 12의 함수 정의 등을 기록

#include "stdio.h"
#include "tchar.h"
#include "windows.h"
#include <process.h>

int main()
{
	GetThreadPriority
}




HANDLE CreateThread(
     LPSECURITY_ATTRIBUTES lpThreadAttributes,
     SIZE_T dwStackSize,
     LPTHREAD_START_ROUTINE lpStartAddress,
     LPVOID lpParameter,
     DWORD dwCreationFlags,
     LPDWORD lpThreadId
);

BOOL GetExitCodeThread(
    HANDLE hThread,
    LPDWORD lpExitCode
);

VOID ExitThread(
    DWORD dwExitCode
);

BOOL TerminateThread(
    HANDLE hThread,
    DWORD dwExitCode
);

DWORD SuspendThread(
     HANDLE hThread
);

DWORD ResumeThread(
     HANDLE hThread
);


BOOL SetThreadPriority(
    HANDLE hThread,
    int nPriority
);

int GetThreadPriority(
    HANDLE hThread
);
