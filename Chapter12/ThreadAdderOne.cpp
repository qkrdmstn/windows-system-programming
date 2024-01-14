/*
	ThreadAdderOne
    쓰레드를 이용한 덧셈
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
            NULL,                      // 디폴트 보안 속성 지정
            0,                         // 디폴트 스택사이즈
            ThreadProc,                // 쓰레드 함수
            (LPVOID) (&paramThread[0]),// 쓰레드 함수의 전달인자
            0,                         // 디폴트 생성 flag 지정
            &dwThreadID[0] // 쓰레드 ID 반환
        );
    
    //...

    WaitForMultipleObjects(
        3,              // 총 3개의 커널 오브젝트를 관찰
        hThread,        // 커널 오브젝트 핸들의 배열 정보
        TRUE,           // 모든 커널 오브젝트가 signaled 상태가 되는 것을
        INFINITE        // 무한히 기다림
    );

    GetExitCodeThread(hThread[0], &result);
    total += result;
    //...

    _tprintf(_T("total : %d"), total);

    CloseHandle(hThread[0]);
    //...
    return 0;
}