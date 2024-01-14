//
// CountThread.cpp
// ���� ������ �������� ���� ����
//

#include "stdio.h"
#include "tchar.h"
#include "windows.h"

#define MAX_THREADS (1024*10)

DWORD WINAPI ThreadProc(LPVOID lpParam) {
    DWORD threadNum = (DWORD)lpParam;

    while (1) {
        _tprintf(_T("thread num : %d \n"), threadNum);
        Sleep(5000);
    }
    return 0;
}

DWORD cntOfThread = 0;

int _tmain(int argc, TCHAR* argv[]) {
    DWORD dwThreadID[MAX_THREADS];
    HANDLE hThread[MAX_THREADS];

    while (1) {
        hThread[cntOfThread] =
            CreateThread(
                NULL,                      // ����Ʈ ���� �Ӽ� ����
                0,                         // ����Ʈ ���û�����
                ThreadProc,                // ������ �Լ�
                (LPVOID)cntOfThread,       // ������ �Լ��� ��������
                0,                        // ����Ʈ ���� flag ����
                &dwThreadID[cntOfThread] // ������ ID ��ȯ
            );

        if (hThread[cntOfThread] == NULL) {
            _tprintf(
                _T("MAXIMUM THREAD NUMBER : %d \n "),
                cntOfThread
            );
            break;
        }
        cntOfThread++;
    }
    for (DWORD i = 0; i < cntOfThread; i++) {
        CloseHandle(hThread[i]);
    }
    return 0;
}