#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
//输入: "Let's take LeetCode contest"
//输出 : "s'teL ekat edoCteeL tsetnoc"
string reverseWords(string s) 
{
	int len = s.size();
	int begin = 0;
	int end;
	for (int i = 0; i<len + 1; ++i)
	{
		if (s[i] == ' ' || s[i] == '\0')
		{
			for (end = i - 1; begin<end; begin++, end--)
			{
				swap(s[begin], s[end]);
			}
			begin = i + 1;
		}
	}
	return s;
}
//int main()
//{
//	string s("Let's take LeetCode contest");
//	string s1 = reverseWords(s);
//	for (int i = 0; i < s1.size(); ++i)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}