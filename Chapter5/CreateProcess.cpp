//CreateProcess.cpp
//덧셈 프로세스를 생성

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

#define DIR_LEN MAX_PATH+1

int _tmain(int argc, TCHAR* argv[])
{
    STARTUPINFO si = { 0, };
    PROCESS_INFORMATION  pi;

    si.cb = sizeof(si);
    si.dwFlags = STARTF_USEPOSITION | STARTF_USESIZE;
    si.dwX = 100;
    si.dwY = 200;
    si.dwXSize = 300;
    si.dwYSize = 200;
    si.lpTitle = _T("I am a boy!");

    TCHAR command[] = _T("AdderProcess.exe 10 20");
    TCHAR cDir[DIR_LEN];
    BOOL state;

    GetCurrentDirectory(DIR_LEN, cDir); // 현재 디렉터리 확인
    _fputts(cDir, stdout);
    _fputts(_T("\n"), stdout);

    SetCurrentDirectory(_T("C:\\WinSystem"));

    GetCurrentDirectory(DIR_LEN, cDir); // 현재 디렉터리 확인
    _fputts(cDir, stdout);
    _fputts(_T("\n"), stdout);

    state = CreateProcess( // 프로세스 생성
        NULL,               // 실행파일의 이름
        command,            // main 함수에 전달될 문자열
        NULL, NULL, TRUE,
        CREATE_NEW_CONSOLE,
        NULL, NULL, &si, &pi
    );

    if (state != 0)
        _fputts(_T("Creation OK! \n"), stdout);
    else
        _fputts(_T("Creation Error! \n"), stdout);

    return 0;
}

//typedef struct _STARTUPINFO
//{
//    DWORD cd;             // 구조체 변수의 크기
//    LPTSTR lpReserved;
//    LPTSTR lpDesktop;
//    LPTSTR lpTitle;       // 콘솔 윈도우의 타이틀 바 제목
//    DWORD dwX;            // 프로세스 윈도우의 x 좌표
//    DWORD dwY;            // 프로세스 윈도우의 y 좌표
//    DWORD dwXSize;        // 프로세스 윈도우의 가로 길이
//    DWORD dwYSize;        // 프로세스 윈도우의 세로 길이
//    DWORD dwXCountChars;
//    DWORD dwYCountChars;
//    DWORD dwFillAttribute;
//    DWORD dwFlags;        // 설정된 멤버의 정보
//    WORD sShowWindow;
//    WORD cbReserved2;
//    LPBYTE lpReserved2;
//    HANDLE hStdInput;
//    HANDLE hStdOutput;
//    HANDLE hStdError;
//} STARTUPINFO, * LPSTARTUPINFO;

//BOOL CreateProcess(
//    LPCSTR lpApplicationName,
//    LPSTR lpCommandLine,
//    LPSECURITY_ATTRIBUTES lpProcessAttributes,
//    LPSECURITY_ATTRIBUTES lpThreadAttributes,
//    BOOL bInheritHandles,
//    DWORD dwCreationFlags,
//    LPVOID lpEnvironment,
//    LPCSTR lpCurrentDirectory,
//    LPSTARTUPINFOA lpStartupInfo,
//    LPPROCESS_INFORMATION lpProcessInformation
//);
//    if the function fails, the return value is zero.

//
//DWORD GetCurrentDirectory(
//    DWORD nBufferLength,
//    LPSTR lpBuffer
//);
//
//BOOL SetCurrentDirectory(
//    LPCSTR lpPathName
//);


//CreateProcess( // 프로세스 생성
//    NULL,                                     // 실행파일의 이름
//    _T("AdderProcess.exe 10 20"),            // main 함수에 전달될 문자열
//    NULL, NULL, TRUE,
//    중략
//);

