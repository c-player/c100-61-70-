#define _CRT_SECURE_NO_WARNINGS 1

//�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣

#include <stdio.h>
#define N 20

int main()
{
	int i, j, k;
	int n;
	printf("����Ԫ�ظ���(������20)��");
	scanf("%d", &n);
	int arr[N] = { 0 };
	printf("�������飺");
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
	//�������һ��Ԫ�ؽ���
	tmp = arr[k];
	arr[k] = arr[0];
	arr[0] = tmp;

	//��С�������һ��Ԫ�ؽ���
	tmp = arr[j];
	arr[j] = arr[n - 1];
	arr[n - 1] = tmp;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}