#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
int my_strstr( const char* p1,const char* p2)
{
	char *s1 = p1;
	char *s2 = p2;
	char *cur = (char*)p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	while(*cur)
	{       
		s1 = cur;
		s2 = p2;
		while (*s2 && *s1 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{ 
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	//strstr:找出一个字符串的是否为另一个字符串的子串
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1,arr2);
	if (ret == NULL)
	{
		printf("不是该字符串的字串");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}
