#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
/*int my_strcmp(char* arr1, char* arr2)
{
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		*arr1++;
		*arr2++;
	}
	if (*arr1 < *arr2)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}*/

int my_strcmp(char* arr1,char* arr2)
{
	  while (*arr1 == *arr2)
      {
     	  if (*arr1 == '\0')
		  {
			  return 0;
		  }
		  *arr1++;
     	  *arr2++;
      } 
	  return (*arr1 - *arr2);
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdee";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n",ret);
		return 0;
}
