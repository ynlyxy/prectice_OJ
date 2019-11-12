#define _CRT_SECURE_NO_WARNINGS 1
#include <string>
#include <iostream>
using namespace std;
//给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。
//num1 和num2 的长度都小于 5100.
//num1 和num2 都只包含数字 0 - 9.
//num1 和num2 都不包含任何前导零。
//你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式。
string addStrings1(string num1, string num2) 
{
	string str;
	int cur = 0, i = num1.size() - 1, j = num2.size() - 1;
	while (i >= 0 || j >= 0 || cur != 0) 
	{
		if (i >= 0) 
			cur += num1[i--] - '0';
		if (j >= 0) 
			cur += num2[j--] - '0';
		//c++11中的全局函数，可以根据任意类型进行转换std::to_string()
		str += to_string(cur % 10);
		cur /= 10; //(cur=0)
	}
	reverse(str.begin(), str.end());
	return str;
}

string addStrings3(string num1, string num2)
{
	int len1 = num1.size() - 1;
	int len2 = num2.size() - 1;
	string ret;
	int flag = 0;
	int sum = 0;
	while (len1 >= 0 || len2 >= 0)
	{
		sum = flag;//若低位向高位进位，则flag=1,sum=1高位首先加一
		if (len1 >= 0)
		{
			sum += num1[len1] - '0';
			--len1;
		}
		if (len2 >= 0)
		{
			sum += num2[len2] - '0';
			--len2;
		}
		if (sum > 9)
		{
			flag = 1;
			sum -= 10;
		}
		else
		{
			flag = 0;
		}
		ret += sum + '0';
	}
	if (flag == 1)
	{
		ret += '1';
	}
	reverse(ret.begin(), ret.end());
	return ret;
}
int main()
{
	string s1("1235");
	string s2("2345");
	string ret = addStrings3(s1, s2);
	cout << ret << endl;
	system("pause");
	return 0;
}