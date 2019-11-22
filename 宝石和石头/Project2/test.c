#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int numJewelsInStones(char * J, char * S)
{
	int arr[256] = { 0 };
	int count = 0;
	char s;
	while (s = *J++)
	{
		++arr[s];
	}
	while (s = *S++)
	{
		if (arr[s] == 1)
		{
			++count;
		}
	}
	return count;
}
int main()
{
	char J[] = "ABaCd";
	char S[] = "aAABBB";
	int ret = numJewelsInStones(J, S);
	printf("%d", ret);
	system("pause");
	return 0;
}