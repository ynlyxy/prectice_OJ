#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
////����һ��ʮ������m(32λ��������Ȼ���ڸ���Ҫת��Ϊ��������n(2<=n<=16)������ת��
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

//��һ��ӵ��arr�����ά����ĸ������У�Ҫ��ŵ���ĸ���֮��ľ���sqrt����x1-x2��*(x1-x2��+(y1-y2)*(y1-y2))������2�����ԷŶ��ٸ����⡣
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
//����: "   -42"
//��� : -42
// ���� : ��һ���ǿհ��ַ�Ϊ '-', ����һ�����š�
//	  ���Ǿ����ܽ���������������������ֵ�����������������õ� - 42 ��
//����: "4193 with words"
//��� : 4193
// ���� : ת����ֹ������ '3' ����Ϊ������һ���ַ���Ϊ���֡�
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