#define _CRT_SECURE_NO_WARNINGS 1
//��ʮ���ƶ�Ӧ�Ķ���������������1�ĸ�����eg:����7��0111�� ���أ�3
//����1
#include<iostream>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		int sum = 0;
		int max = 0;
		while (num)
		{
			if (num % 2 == 1)
			{
				++sum;
				if (sum>max)
				{
					max = sum;
				}
			}
			else
			{
				sum = 0;
			}
			num = num >> 1;
		}
		cout << max << endl;
	}
	system("pause");
	return 0;
}
//����2����bug:û�п��Ǹ���)
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		int sum = 0;
//		int max = 0;
//		for (int i = 1; i <= 32; ++i)
//		{
//			if ((num % 2) == 1)
//			{
//				++sum;
//			}
//			else
//			{
//				if (sum>max)
//				{
//					max = sum;
//					sum = 0;
//				}
//			}
//			num >>= 1;
//		}
//		cout << max << endl;
//	}
//	system("pause");
//	return 0;
//}
//����3
//#include<iostream>
//using namespace std;
//int main()
//{
//	int byte;
//	while (cin >> byte)
//	{
//		int k = 0;
//		for (k = 0; byte != 0; k++)
//		{
//			byte = byte&(byte << 1);
//		}
//		cout << k << endl;
//	}
//	return 0;
//}