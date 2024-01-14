// 챕터 15의 함수 정의 등을 기록

#include "stdio.h"
#include "tchar.h"
#include "windows.h"
#include <process.h>

#define ARR_LEN 5
void bubbleSort(int srcArr[], int n)
{
	int i, j, temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			if (srcArr[j - 1] > srcArr[j])
			{
				temp = srcArr[j - 1];
				srcArr[j - 1] = srcArr[j];
				srcArr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[ARR_LEN] = { 5,3,7,6,9 };
	bubbleSort(arr, ARR_LEN);
	for (int i = 0; i < ARR_LEN; i++)
		printf("%d, ", arr[i]);
	return 0;
}

int main()
{
	int arr[10][10];

	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			total += arr[j][i];
		}
	}
}