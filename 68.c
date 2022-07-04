#define _CRT_SECURE_NO_WARNINGS 1

//有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。

//扩大空间，三次位移
//#include <stdio.h>
//#define N 10
//#define M 6
//
//int main()
//{
//	int a[N + M] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i;
//	int tmp;
//	for (i = N - M; i < N; i++)
//	{
//		a[i + M] = a[i];
//	}
//	for (i = 0; i < N - M; i++)
//	{
//		a[i + M] = a[i];
//	}
//	for (i = 0; i < M; i++)
//	{
//		a[i] = a[N + i];
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//	}
//    return 0;
//}


//只占用O（1）的辅助空间，但是牺牲了时间复杂度，这里由于顺序排列，时间复杂度仍与n线性相关
#include <stdio.h>

void tran(int a[], int k, int n);
void reverse(int a[], int s, int e);

int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int k, i;
	printf("请输入右移的次数：");
	scanf("%d", &k);
	tran(a, k, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

void tran(int a[], int k, int n)
{

	if (k >= n)
		k = k % n;      //n = 10, k = 3  0 1 2 3 4 5 6 7 8 9
	reverse(a, 0, n - k - 1); //移动位数前倒置 6 5 4 3 2 1 0 7 8 9
	reverse(a, n - k, n - 1); //移动位倒置     6 5 4 3 2 1 0 9 8 7 
	reverse(a, 0, n - 1);   //整体倒置       7 8 9 0 1 2 3 4 5 6
}

void reverse(int a[], int start, int end)
{
	int temp;
	while (start < end)  //(n-k)/2 * (k/2),留下主要项，时间复杂度为kn
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}

}