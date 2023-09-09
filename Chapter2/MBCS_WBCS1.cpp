#define UNICODE //#include <tchar.h> 선언 전에 정의해야함
#define _UNICODE

#undef UNICODE
#undef _UNICODE

#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int main(void)
{
    TCHAR str[] = _T("1234567");
    int size = sizeof(str);
    printf("string length : %d \n", size);
    return 0;
}

/*
typedef char CHAR
typedef wchar_t WCHAR

#define CONST const

typedef CHAR * LPSTR
typedef CONST CHAR * LPCSTR

typedef WCHAR * LPWSTR
typedef CONST WCHAR * LPCWSTR
*/

/*

#ifdef UNICODE
    typedef WCHAR TCHAR;
    typedef LPWSTR LPTSTR;
    typedef LPCWSTR LPCTSTR;
#else
    typedef CHAR TCHAR;
    typedef LPSTR LPTSTR;
    typedef LPCSTR LPCTSTR;
#endif


#ifdef _UNICODE
    #define __T(x) L##x
#else
    #define __T(x) x
#endif

#define _T(x) __T(x)
#define _TEXT(x) __T(x)
*/

/*
#include <tchar.h>

#ifdef UNICODE
    #define _tmain wmain
    #define _tprintf wprintf
    ...
#else
    #define _tmain main
    #define _tprintf printf
    ...
#endif
*/

