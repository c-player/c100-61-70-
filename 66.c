#define _CRT_SECURE_NO_WARNINGS 1

//输入3个数a,b,c，按大小顺序输出。

#include <stdio.h>

//int main()
//{
//	int a, b, c;
//	printf("请输入三个数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	if (a > c)
//	{
//		a = a ^ c;
//		c = a ^ c;
//		a = a ^ c;
//	}
//	if (b > c)
//	{
//		b = b ^ c;
//		c = b ^ c;
//		b = b ^ c;
//	}
//	printf("%d %d %d", a, b, c);
//    return 0;
//}


//指针
void Swap(int* ptr1, int* ptr2)
{
	int p;
	p = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = p;
}

int main()
{
	int a, b, c;
	int *p1, *p2, *p3;
	printf("请输入三个数：");
	scanf("%d%d%d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if (a > b)
		Swap(p1, p2);
	if (a > c)
		Swap(p1, p3);
	if (b > c)
		Swap(p2, p3);
	printf("%d %d %d", *p1, *p2, *p3);
	return 0;
}