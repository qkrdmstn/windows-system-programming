// 챕터 6의 함수 정의 등을 기록

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

BOOL SetPriorityClass
(
	HANDLE hProcess,
	DWORD dwPriorityClass
);

typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess;       // 프로세스의 핸들
    HANDLE hThread;        // 쓰레드의 핸들
    DWORD dwProcessId;     // 프로세스의 ID
    DWORD dwThreadId;      // 쓰레드의 ID
} PROCESS_INFORMATION;

CloseHandle(
    HANDLE hObject
);

BOOL ReadFile(
    HANDLE hFile,
    LPVOID lpBuffer,
    DWORD nNumberOfBytesToRead,
    LPDWORD lpNumberOfBytesRead,
    LPOVERLAPPED lpOverlapped
);

BOOL WriteFile(
    HANDLE hFile,
    LPCVOID lpBuffer,
    DWORD nNumberOfBytesToWrite,
    LPDWORD lpNumberOfBytesWritten,
    LPOVERLAPPED lpOverlapped
);

DWORD WaitForSingleObject(
    HANDLE hHandle,
    DWORD dwMilliseconds
);

DWORD WaitForMultipleObjects(
    DWORD nCount,
    const HANDLE* lpHandles,
    BOOL bWaitAll,
    DWORD dwMilliseconds
);
