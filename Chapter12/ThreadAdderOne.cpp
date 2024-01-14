/*
	ThreadAdderOne
    �����带 �̿��� ����
*/
#include "stdio.h"
#include "tchar.h"
#include "windows.h"


DWORD WINAPI ThreadProc(LPVOID lpParam) {
    DWORD* nPtr = (DWORD*)lpParam;

    DWORD numOne = *nPtr;
    DWORD numTwo = *(nPtr + 1);

    DWORD total = 0;
    for (DWORD i = numOne; i <= numTwo; i++)
    {
        total += i;
    }

    return total;
}

int _tmain(int argc, TCHAR* argv[]) {
  
    DWORD dwThreadID[3];
    HANDLE hThread[3];

    DWORD paramThread[] = { 1, 3, 4, 7, 8, 10 };
    DWORD total = 0;
    DWORD result = 0;

    hThread[0] =
        CreateThread(
            NULL,                      // ����Ʈ ���� �Ӽ� ����
            0,                         // ����Ʈ ���û�����
            ThreadProc,                // ������ �Լ�
            (LPVOID) (&paramThread[0]),// ������ �Լ��� ��������
            0,                         // ����Ʈ ���� flag ����
            &dwThreadID[0] // ������ ID ��ȯ
        );
    
    //...

    WaitForMultipleObjects(
        3,              // �� 3���� Ŀ�� ������Ʈ�� ����
        hThread,        // Ŀ�� ������Ʈ �ڵ��� �迭 ����
        TRUE,           // ��� Ŀ�� ������Ʈ�� signaled ���°� �Ǵ� ����
        INFINITE        // ������ ��ٸ�
    );

    GetExitCodeThread(hThread[0], &result);
    total += result;
    //...

    _tprintf(_T("total : %d"), total);

    CloseHandle(hThread[0]);
    //...
    return 0;
}