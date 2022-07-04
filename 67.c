#define _CRT_SECURE_NO_WARNINGS 1

//输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

#include <stdio.h>
#define N 20

int main()
{
	int i, j, k;
	int n;
	printf("输入元素个数(不多于20)：");
	scanf("%d", &n);
	int arr[N] = { 0 };
	printf("输入数组：");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int min = arr[0], max = arr[0];
	int tmp;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			k = i;
			max = arr[i];
		}
		if (arr[i] < min)
		{
			j = i;
			min = arr[i];
		}
	}
	//最大的与第一个元素交换
	tmp = arr[k];
	arr[k] = arr[0];
	arr[0] = tmp;

	//最小的与最后一个元素交换
	tmp = arr[j];
	arr[j] = arr[n - 1];
	arr[n - 1] = tmp;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}