#define _CRT_SECURE_NO_WARNINGS 1

//�� n��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ������

//����ռ䣬����λ��
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


//ֻռ��O��1���ĸ����ռ䣬����������ʱ�临�Ӷȣ���������˳�����У�ʱ�临�Ӷ�����n�������
#include <stdio.h>

void tran(int a[], int k, int n);
void reverse(int a[], int s, int e);

int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int k, i;
	printf("���������ƵĴ�����");
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
	reverse(a, 0, n - k - 1); //�ƶ�λ��ǰ���� 6 5 4 3 2 1 0 7 8 9
	reverse(a, n - k, n - 1); //�ƶ�λ����     6 5 4 3 2 1 0 9 8 7 
	reverse(a, 0, n - 1);   //���嵹��       7 8 9 0 1 2 3 4 5 6
}

void reverse(int a[], int start, int end)
{
	int temp;
	while (start < end)  //(n-k)/2 * (k/2),������Ҫ�ʱ�临�Ӷ�Ϊkn
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}

}