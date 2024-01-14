// 챕터 7의 함수 정의 등을 기록

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

HANDLE CreateMailSlot(
	LPCTSTR lpName,
	DWORD nMaxMessageSize,
	DWORD lReadTimeout,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes
);