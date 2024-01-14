/*
    NonStopAdderManager.cpp

    프로그램 설명
        1. 1~10까지 덧셈하여 출력
        2. 문제점을 지니고 있는 예제
*/

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

int _tmain(int argc, TCHAR* argv[])
{
    STARTUPINFO si1 = { 0, };
    STARTUPINFO si2 = { 0, };

    PROCESS_INFORMATION pi1;
    PROCESS_INFORMATION pi2;

    DWORD return_val1;
    DWORD return_val2;

    TCHAR command1[] = _T("PartAdder.exe 1 5");
    TCHAR command2[] = _T("PartAdder.exe 6 10");

    STILL_ACTIVE
}