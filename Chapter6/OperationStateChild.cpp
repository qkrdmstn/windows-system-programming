/*
    OperationStateChild.cpp
    프로그램 설명: 프로그램 실행 결과에 따른 반환값
*/
#include "stdio.h"
#include "stdlib.h"
#include "tchar.h"
#include "windows.h"

int _tmain(int argc, TCHAR* argv[])
{
    float num1, num2;
    _fputts(_T("Return Value Test \n"), stdout);
    _tscanf(_T("%f %f"), &num1, &num2);

    if (num2 == 0)
    {
        exit(-1); // or return -1;
    }

    _tprintf(_T("STILL_ACTIVE \n\n"));

    return 1;
}