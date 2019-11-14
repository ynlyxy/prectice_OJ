#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	int max = A;
	int min = B;
	if (A>B)
	{
		max = A;
		min = B;
	}
	else
	{
		max = B;
		min = A;
	}
	//辗转相除法
	/*int ret = max%min;
	int sum = max*min;
	while (ret)
	{
		max = min;
		min = ret;
		ret = max%min;//此时min就是最大公约数
	}
	cout << sum / min;*/
	for (int i = max;; ++i)
	{
		if (i%max == 0 && i%min == 0)
		{
			cout << i << endl;
			break;
		}
	}
	system("pause");
	return 0;
}