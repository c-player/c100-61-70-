#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。

#include <stdio.h>

int my_strlen(char* arr)
{
	if (*arr == '\0') return 0;
	else return 1 + my_strlen(arr + 1);
}

int main()
{
	char arr[] = "abcde";
	printf("%d", my_strlen(arr));
    return 0;
}