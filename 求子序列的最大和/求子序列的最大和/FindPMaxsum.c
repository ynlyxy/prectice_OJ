#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//时间复杂度太高
int findmax1(int arr[], int n)
{
	int max = arr[0];
	int sum = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = i; j < n; j++)
		{
			sum = sum + arr[j];
			if (sum >= max)
			{
				max = sum;
			}
		}
	}
	return max;
}
int main()
{
	int arr[5] = { -3, 1, -2, -3, 2 };
	int yet = findmax1(arr, 5);
	printf("%d", yet);
	system("pause");
	return 0;
}