// 챕터 18의 함수 정의 등을 기록

#include "stdio.h"
#include "tchar.h"
#include "windows.h"
#include <process.h>

int main()
{

    SetFilePointer
}

HANDLE CreateFile(
    LPCSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile
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

BOOL GetFileTime(
    HANDLE hFile,
    LPFILETIME lpCreationTime,
    LPFILETIME lpLastAccessTime,
    LPFILETIME lpLastWriteTime
);

typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} FILETIME, * PFILETIME, * LPFILETIME;

BOOL FileTimeToSystemTime(
    FILETIME* lpFileTime,
    LPSYSTEMTIME lpSystemTime
);

BOOL SystemTimeToTzSpecificLocalTime(
    TIME_ZONE_INFORMATION* lpTimeZoneInformation,
    SYSTEMTIME* lpUniversalTime,
    LPSYSTEMTIME lpLocalTime
);


FILE* fp = fopen("test.dat", "rb");

fseek(fp, 0, SEEK_END);
DWORD sizeOfFile = ftell(fp);

DWORD GetFileSize(
    HANDLE hFile,
    LPDWORD lpFileSizeHigh
);

BOOL GetFileSizeEx(
    HANDLE hFile,
    PLARGE_INTEGER lpFileSize
);

DWORD GetFileAttributes(
    LPCWSTR lpFileName
);

BOOL SetFileAttributes(
    LPCWSTR lpFileName,
    DWORD dwFileAttributes
);

BOOL GetFileInformationByHandle(
    HANDLE hFile,
    LPBY_HANDLE_FILE_INFORMATION lpFileInformation
);

typedef struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION, * PBY_HANDLE_FILE_INFORMATION, * LPBY_HANDLE_FILE_INFORMATION;

DWORD GetFullPathName(
    LPCSTR lpFileName,
    DWORD nBufferLength,
    LPSTR lpBuffer,
    LPSTR* lpFilePart
);

DWORD SetFilePointer(
    HANDLE hFile,
    LONG lDistanceToMove,
    PLONG lpDistanceToMoveHigh,
    DWORD dwMoveMethod
);

BOOL CreateDirectory(
    LPCWSTR lpPathName,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
);

BOOL RemoveDirectory(
    LPCWSTR lpPathName
);

DWORD GetCurrentDirectory(
    DWORD nBufferLength,
    LPWSTR lpBuffer
);

BOOL SetCurrentDirectory(
    LPCWSTR lpPathName
);

UINT GetSystemDirectory(
    LPWSTR lpBuffer,
    UINT uSize
);

UINT GetWindowsDirectory(
    LPWSTR lpBuffer,
    UINT uSize
);

DWORD SearchPath(
    LPCWSTR lpPath,
    LPCWSTR lpFileName,
    LPCWSTR lpExtension,
    DWORD nBufferLength,
    LPWSTR lpBuffer,
    LPWSTR* lpFilePart
);