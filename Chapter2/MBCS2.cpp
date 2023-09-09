#include <stdio.h>

int main(void)
{
	char str[] = "한글입니다";
	int i;

	for (int i = 0; i < 5; i++) //MBCS라 문자열 길이에 따른 반복문 X
		fputc(str[i], stdout);

	fputs("\n", stdout);

	for (i = 0; i < 10; i++)
		fputc(str[i], stdout);

	fputs("\n", stdout);
	return 0;
}