#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给定一个字符串和一个整数 k，你需要对从字符串开头算起的每个 2k 个字符的前k个字符进行反转。
//如果剩余少于 k 个字符，则将剩余的所有全部反转。如果有小于 2k 但大于或等于 k 个字符，则反转前 k 个字符，并将剩余的字符保持原样。
char * reverseStr(char * s, int k)
{
	int len = strlen(s);
	if (len <= k)
	{
		return s;
	}
	if (len<2 * k&&len >= k)
	{
		for (int n = 0; n<k; n++)
		{
			int r = k - 1;
			if (n<r)
			{
				int tmp = s[n];
				s[n] = s[r];
				s[r] = tmp;
			}
		}
	}
	for (int i = 0; i<len; i = i + (2 * k))
	{
		if (i + 1 >= len)
		{
			break;
		}
		for (int j = i; j<(k + j); ++j)
		{
			int n = k - 1 + i;
			if (j<n)
			{
				int tmp = s[j];
				s[j] = s[n];
				s[n] = tmp;
			}
			else
			{
				break;
			}
		}
	}
	return s;
}
int main()
{
	system("pause");
	return 0;
}