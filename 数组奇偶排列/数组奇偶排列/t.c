#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int* sortArrayByParity(int* A, int ASize) 
{
	//*returnSize = ASize;
	int temp;
	int i = 0, j = ASize - 1;
	while (i<j)
	{
		while (i<j&&A[i] % 2 == 0)
			i++;
		while (i<j&&A[j] % 2 != 0)
			j--;
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
	return A;
}
int main()
{
	int A[] = { 1, 2, 3, 4, 5, 6 };
	int *ret=sortArrayByParity(A,6);
	printf("%s\n", ret);
	system("pause");
	return 0;
}