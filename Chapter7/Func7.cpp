// é�� 7�� �Լ� ���� ���� ���

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

HANDLE CreateMailSlot(
	LPCTSTR lpName,
	DWORD nMaxMessageSize,
	DWORD lReadTimeout,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes
);