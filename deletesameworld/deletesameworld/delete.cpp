#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//将第二个字符映射到hashtable数组中，用来判断一个字符在这个字符串，
//判断字符在第二个字符串，可以把不重复的暂时保存在一个新的字符串中。
using namespace std;
int main()
{
	string s1, s2;
	//cin接收遇到空格就结束了
	//OJ中，输入字符串用getline
	getline(cin, s1);
	getline(cin, s2);
	int arr[256] = { 0 };
	string ret;
	for (size_t i = 0; i < s2.size(); ++i)
	{
		//统计一个字符出现的次数
		arr[s2[i]]++;
	}
	for (size_t j = 0; j < s1.size(); ++j)
	{
		if (arr[s1[j]] == 0)
		{
			ret += s1[j];
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}