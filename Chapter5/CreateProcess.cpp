//CreateProcess.cpp
//���� ���μ����� ����

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

    GetCurrentDirectory(DIR_LEN, cDir); // ���� ���͸� Ȯ��
    _fputts(cDir, stdout);
    _fputts(_T("\n"), stdout);

    SetCurrentDirectory(_T("C:\\WinSystem"));

    GetCurrentDirectory(DIR_LEN, cDir); // ���� ���͸� Ȯ��
    _fputts(cDir, stdout);
    _fputts(_T("\n"), stdout);

    state = CreateProcess( // ���μ��� ����
        NULL,               // ���������� �̸�
        command,            // main �Լ��� ���޵� ���ڿ�
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
//    DWORD cd;             // ����ü ������ ũ��
//    LPTSTR lpReserved;
//    LPTSTR lpDesktop;
//    LPTSTR lpTitle;       // �ܼ� �������� Ÿ��Ʋ �� ����
//    DWORD dwX;            // ���μ��� �������� x ��ǥ
//    DWORD dwY;            // ���μ��� �������� y ��ǥ
//    DWORD dwXSize;        // ���μ��� �������� ���� ����
//    DWORD dwYSize;        // ���μ��� �������� ���� ����
//    DWORD dwXCountChars;
//    DWORD dwYCountChars;
//    DWORD dwFillAttribute;
//    DWORD dwFlags;        // ������ ����� ����
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


//CreateProcess( // ���μ��� ����
//    NULL,                                     // ���������� �̸�
//    _T("AdderProcess.exe 10 20"),            // main �Լ��� ���޵� ���ڿ�
//    NULL, NULL, TRUE,
//    �߷�
//);

