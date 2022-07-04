#define _CRT_SECURE_NO_WARNINGS 1

//打印出杨辉三角形（要求打印出10行）。

#include <stdio.h>

int YangHui(int i, int j)
{
	if (j == 1 || i == j) return 1;
	else return YangHui(i - 1, j - 1) + YangHui(i - 1, j);
}

int main()
{
	int i, j;
	int k, space = 20;  //用于打印空格
	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k < 20 - (i - 1) * 2; k++) printf(" ");//打印空格
		//控制格式
		for (j = 1; j <= i; j++)
		{
			if (YangHui(i, j) > 99)
			{
				printf("%-3d ", YangHui(i, j));
			}
			else
			{
				printf("%-2d  ", YangHui(i, j));
			}
		}
		printf("\n");
	}
    return 0;
}


/*       
                   1
                 1   1
			   1   2   1
			 1   3   3   1
		   1   4   6   4   1
		         ......
*/




