#define _CRT_SECURE_NO_WARNINGS 1

//дһ����������һ���ַ����ĳ��ȣ��� main �����������ַ�����������䳤�ȡ�

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