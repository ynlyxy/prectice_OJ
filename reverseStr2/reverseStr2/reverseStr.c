#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���ַ�����һ������ k������Ҫ�Դ��ַ�����ͷ�����ÿ�� 2k ���ַ���ǰk���ַ����з�ת��
//���ʣ������ k ���ַ�����ʣ�������ȫ����ת�������С�� 2k �����ڻ���� k ���ַ�����תǰ k ���ַ�������ʣ����ַ�����ԭ����
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