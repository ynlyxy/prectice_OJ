#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int* singleNumber(int* nums, int numsSize, int* returnSize)
{
	int i = 0;
	int pos = 0;
	int ret = 0;
	int *arr = (int*)malloc(2 * sizeof(int));
	arr[0] = 0;
	arr[1] = 0;
	for (i = 0; i<numsSize; ++i)
	{
		ret = ret^nums[i];
	}
	for (i = 0; i<32; ++i)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i<numsSize; ++i)
	{
		if (((nums[i] >> pos)&1) == 1)
		{
			arr[0] = arr[0] ^ nums[i];
		}
		else
		{
			arr[1] = arr[1] ^ nums[i];
		}
	}
	/*for (i = 0; i < 2; i++)
	{
		printf("%d ", arr[i]);
	}*/
	return arr;
}


int main()
{
	int arr[] = { 2, 3, 2, 4, 5, 4 };
	int *ret = singleNumber(arr,6,2);
	for (int i = 0; i < 2; ++i)
	{
		printf("%d ", ret[i]);
	}
	system("pause");
	return 0;
}



