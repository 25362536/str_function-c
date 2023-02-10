# str_function-c
c语言str库
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//计数器
//int my_strlen(const char *arr)
//{
//	int count = 0;
//	while (*arr++ !=0)
//	{
//		count++;
//
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "abcdef"};
//	int count =my_strlen(arr);
//	printf("%d\n",count);
//	return 0;
//}

//递归法
//int my_strlen(char*arr)
//{
//	if ((*arr) != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//
//int main() 
//{
//	char arr[] = { "abcdef" };
//	printf("%d", my_strlen(arr));
//	return 0;
//}

// 指针减指针法
int my_strlen(char*arr)
{

	int start = arr;
	while (*arr !='\0')
	{
		arr++;
	}
	int ret = arr - start;
	return ret;
}
int main()
{
	char arr[] = { "abcdef" };
	int ret = my_strlen(arr);
	printf("%d",ret);
	return 0;
}

