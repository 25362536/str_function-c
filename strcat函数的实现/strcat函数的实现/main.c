#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
void my_strcpy(char*arr1,char*arr2)
{
	while(*arr1 !='\0')
	{
		arr1++;
	}
	while ((*arr1++ = *arr2++) !='\0')
	{
		;
	}
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
}