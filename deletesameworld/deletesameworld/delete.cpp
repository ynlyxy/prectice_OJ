#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//���ڶ����ַ�ӳ�䵽hashtable�����У������ж�һ���ַ�������ַ�����
//�ж��ַ��ڵڶ����ַ��������԰Ѳ��ظ�����ʱ������һ���µ��ַ����С�
using namespace std;
int main()
{
	string s1, s2;
	//cin���������ո�ͽ�����
	//OJ�У������ַ�����getline
	getline(cin, s1);
	getline(cin, s2);
	int arr[256] = { 0 };
	string ret;
	for (size_t i = 0; i < s2.size(); ++i)
	{
		//ͳ��һ���ַ����ֵĴ���
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