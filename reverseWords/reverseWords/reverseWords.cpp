#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//����һ���ַ���������Ҫ��ת�ַ�����ÿ�����ʵ��ַ�˳��ͬʱ�Ա����ո�͵��ʵĳ�ʼ˳��
//����: "Let's take LeetCode contest"
//��� : "s'teL ekat edoCteeL tsetnoc"
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