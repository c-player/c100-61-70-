#define _CRT_SECURE_NO_WARNINGS 1

//有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），
//凡报到3的人退出圈子，问最后留下的是原来第几号的那位。

#include <stdio.h>
#define N 10  // 声明人数

int main()
{
	int call = 0, out = 0;        //call为报数(1,2,3)，out为退出人数
	int a[N] = { 0 };             //定义数组存放人，每个人初始化为0
	int i = 0;
	while (1)                
	{
		if (a[i] == 0)            //如果未退出圈子
		{
			call++;               //报数
			call %= 3;     
			if (call == 0)        //报数为3
			{
				a[i] = 1;         //置1，退出圈子
				out++;            //退出人数+1
			}
		}
		i++;
		if (i == N) i = 0;        //循环完一圈，继续循环报数
		if (out == N - 1) break;  //退出N-1人后，退出循环
	}
	for (i = 0; i < N; i++)
	{
		if (a[i] == 0) printf("留下的是%d号。", i + 1);//查找值仍为0的人，由于坐标从0开始，号数+1
	}
    return 0;
}
