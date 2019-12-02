#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Math.h>
int binaryGap1(int N) {
	int last = -1, ans = 0;
	for (int i = 0; i < 32; ++i)
	if (((N >> i) & 1) > 0) {
		if (last >= 0)
			ans = fmax(ans, i - last);
		last = i;
	}
	return ans;
}
int binaryGap2(int N) 
{
	int result = 0;
	int zero_count = -1;
	while (N > 0)
	{
		int i = N & 1;
		if (zero_count != -1 && i == 0)
		{
			++zero_count;
		}
		else if (i == 1)
		{
			result = fmax(result, zero_count + 1);
			zero_count = 0;
		}
		N >>= 1;
	}
	return result;
}
int main()
{
	int ret = binaryGap2(12);
	printf("%d", ret);
	system("pause");
	return 0;
}