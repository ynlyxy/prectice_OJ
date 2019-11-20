#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//两层循环遍历
char *Delete1(char arr1[], char arr2[])
{
	char *p1 = arr1;
	char *p2 = arr1;
	while (*arr2)
	{
		p2 = p1;
		arr1 = p1;
		while (*arr1)
		{
			if (*arr1 != *arr2)
			{
				*p2 = *arr1;
				p2++;
			}
			arr1++;
		}
		*p2 = '\0';
		arr2++;
	}
	return p1;
}
//将字符串映射到一个数组中
char *Delete2(char *str1, char *str2)
{	
  int arr[256] = { 0 };
	char *p = str1;
	char *q = str1;
	while (*str2!='\0')
	{
		arr[*str2] = 1;
        str2++;
	}
	while (*p != '\0')
	{
		if (arr[*p]!=1)
		{
			*q++ = *p;
		}
		p++;
	}
	*q = '\0';
	return str1;
}
//int main()
//{
//	char arr1[] = "the are students";
//	char arr2[] = "aeiou";
//	char *p = Delete(arr1, arr2);
//	printf("%s\n", p);
//	system("pause");
//	return 0;
//}