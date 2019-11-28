#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//输入：[1,1,4,2,1,3]
//输出：3
//解释：高度为4,3,和最后一个1的学生没有站在正确的位置上
int heightChecker(int* heights, int heightsSize)
{
	int i = 0;
	int sum = 0;
	int heights_p[101] = { 0 };
	int j = 0;
	int c = 0;
	for (i; i<heightsSize; i++)
	{
		heights_p[heights[i]]++;
	}
	for (i = 1; i<101; i++)
	{
		j = 0;
		while (heights_p[i])
		{
			if (c > heightsSize)
			{
				return sum;
			}
			if (heights[c] != i)
			{
				sum++;
			}
			heights_p[i]--;
			c++;
			j++;
		}
	}
	return sum;
}
int main()
{
	int heights[] = { 1, 4, 2, 6, 8 };
	int ret = heightChecker(heights, 5);
	printf("%d", ret);
	system("pause");
	return 0;
}