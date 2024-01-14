// é�� 6�� �Լ� ���� ���� ���

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

BOOL SetPriorityClass
(
	HANDLE hProcess,
	DWORD dwPriorityClass
);

typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess;       // ���μ����� �ڵ�
    HANDLE hThread;        // �������� �ڵ�
    DWORD dwProcessId;     // ���μ����� ID
    DWORD dwThreadId;      // �������� ID
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
