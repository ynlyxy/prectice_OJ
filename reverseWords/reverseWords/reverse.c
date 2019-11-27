#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char * reverseWords(char * s)
{
	int begin = 0;
	int end = 0;
	int len = strlen(s);
	char* p = (char*)malloc(sizeof(char)*len + 1);
	p = s;
	for (int i = 0; i < len + 1; ++i)
	{
		if (p[i] == ' ' || p[i] == '\0')
		{
			end = i - 1;
			while (begin<end)
			{
				int tmp = p[begin];
				p[begin] = p[end];
				p[end] = tmp;
				++begin;
				--end;
			}
			begin = i + 1;
		}
	}
	return p;
}
int main()
{
	char s[]="Let's take LeetCode contest";
	char* s1 = reverseWords(s);
	int len = sizeof(s) / sizeof(s[0]);
	for (int i = 0; i < len; ++i)
	{
		printf("%c ", s1[i]);
	}
	system("pause");
	return 0;
}
