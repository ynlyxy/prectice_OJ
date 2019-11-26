#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int find_one1(char str[], int len)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == str[j])
			{
				count++;
			}
			if (count == 2)
			{
				count = 0;
				break;
			}
		}
		if ((count == 1) && (j == len))
		{
			return i;
		}
	}
	return -1;
}
//int main()
//{
//	char str[] = "abaccdeff";
//	int len = strlen(str);
//	int p = find_one(str, len);
//	printf("%c", str[p]);
//	system("pause");
//	return 0;
//}
int find_one2(char *str)
{
	int arr[256] = { 0 };
	char *p = str;
	int i = 0;
	while (*p != '\0')
	{
		++arr[*p];
		p++;
	}
	p = str;
	while (*p != '\0')
	{
		if (arr[*p] == 1)
		{
			return *p;
		}
		p++;
	}
	return '\0';
}
int main()
{
	char str[] = "aBbaccdeff";
	printf("%c", find_one2(str));
	system("pause");
	return 0;
}