#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
////给定一个十进制数m(32位整数），然后在给定要转换为几进制数n(2<=n<=16)，进行转换
//int main()
//{
//	string s(" ");
//	string tmp("0123456789ABCDEF");
//	int m, n;
//	cin >> m >> n;
//	while (m)
//	{
//		if (m<0)
//		{
//			m = -m;
//			cout << "-";
//		}
//		s = tmp[m%n] + s;
//		m = m / n;
//	}
//	cout << s << endl;
//	system("pause");
//	return 0;
//}

//在一个拥有arr这个二维数组的格子数中，要求放蛋糕的格子之间的距离sqrt（（x1-x2）*(x1-x2）+(y1-y2)*(y1-y2))不等于2，可以放多少个蛋糕。
//int main()
//{
//	int W, H;
//	cin >> W;
//	cin >> H;
//	int arr[1000][1000] = { 0 };
//	int sum = 0;
//	for (int i = 0; i<W; ++i)
//	{
//		for (int j = 0; j<H; ++j)
//		{
//			if (arr[i][j] == 0)
//			{
//				++sum;
//				if (i + 2<W)
//				{
//					arr[i + 2][j] = -1;
//				}
//				if (j + 2<H)
//				{
//					arr[i][j + 2] = -1;
//				}
//			}
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}




//leetcode
//输入: "   -42"
//输出 : -42
// 解释 : 第一个非空白字符为 '-', 它是一个负号。
//	  我们尽可能将负号与后面所有连续出现的数字组合起来，最后得到 - 42 。
//输入: "4193 with words"
//输出 : 4193
// 解释 : 转换截止于数字 '3' ，因为它的下一个字符不为数字。
int myAtoi(string str)
{
	long long sum = 0;
	int j = 0;
	int flag = 1;
	while (j<str.size() && str[j] == ' ')
	{
		++j;
	}
	for (int i = j; i<str.size(); ++i)
	{
		if (str[i]>'9' || str[i]<'0')
		{
			if (str[i] == '+')
			{
				flag = 1;
				if (str[i + 1]>'9' || str[i + 1]<'0')
				{
					return 0;
				}
			}
			else if (str[i] == '-')
			{
				flag = -1;
				if (str[i + 1]>'9' || str[i + 1]<'0')
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			sum = sum * 10 + str[i] - '0';
			if (sum>2147483647)
			{
				if (flag == 1)
				{
					return INT_MAX;
				}
				else{
					return INT_MIN;
				}
			}
			if (str[i + 1]>'9' || str[i + 1]<'0' || str[i + 1] == '\0')
			{
				break;
			}
		}
	}
	return sum*flag;
}
int main()
{
	string str("2147483648");
	int ret = myAtoi(str);
	cout << ret << endl;
	system("pause");
	return 0;
}