// WinSysDir.cpp
// �ý��� ���͸��� Windows ���͸� Ȯ��

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

#define DIR_LEN MAX_PATH+1

int _tmain(int argc, TCHAR* argv[])
{
	TCHAR sysDir[DIR_LEN];
	TCHAR winDir[DIR_LEN];

	//�ý��� ���͸� ���� ����
	GetSystemDirectory(sysDir, DIR_LEN);

	//Windows ���͸� ���� ����
	GetWindowsDirectory(winDir, DIR_LEN);

	_tprintf(_T("System Dir: %s \n"), sysDir);
	_tprintf(_T("Windows Dir: %s \n"), winDir);

	return 0;
}