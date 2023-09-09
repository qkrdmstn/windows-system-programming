#include <stdio.h>
#include <string.h>

#include "locale.h"

int main(void)
{
	wchar_t str[] = L"ABC";
	int size = sizeof(str);
	int len = wcslen(str);

	_wsetlocale(LC_ALL, L"korean"); //유니코드 기반 한글 출력 #include "locale.h"
	wprintf(L"배열의 크기: %d \n", size);
	wprintf(L"문자열 길이: %d \n", len);

	return 0;
}