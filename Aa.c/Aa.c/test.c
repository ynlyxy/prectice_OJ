#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//大写字母转小写
//char * toLowerCase(char * str)
//{
//	assert(*str);
//	int len = strlen(str);
//	int j = 0;
//	int i = 0;
//
//	for (i = 0; i<len; i++)
//	{
//		if ((str[i]>='A') && (str[i]<='Z'))
//		{
//			str[j] = str[i] + 32;
//			j++;
//		}
//		else
//		{
//			str[j] = str[i];
//			j++;
//		}
//	}
//	str[j] = '\0';
//	return str;
//}
//int main()
//{
//	char str[] = "AbGcf";
//	char *s = toLowerCase(str);
//	printf("%s", s);
//	system("pause");
//	return 0;
//}


//两个数中二进制不同的位数
//int hammingDistance(int x, int y)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i<32; i++)
//	{
//		if (((x >> i & 1) ^ (y >> i & 1)) == 1)
//			++count;
//	}
//	return count;
//}
//int hammingDistance(int x, int y)
//{
//	int count = 0;
//	int ret = x^y;
//	while (ret)
//	{
//		ret = ret&(ret - 1);
//		++count;
//	}
//	return count;
//}
//int main()
//{
//	int x = 1;
//	int y = 4;
//	int ret = hammingDistance(x, y);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}