#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
//��дһ���㷨���ж�һ�����ǲ��ǡ�����������
//����: 19
//��� : true
// ���� :����������λ����ƽ���ͣ��ĵ�����������ƽ���ͣ�����ظ������Ľ���ض�Ϊ1.
//	1^2 + 9^2 = 82
//	8^2 + 2^2 = 68
//	6^2 + 8^2 = 100
//	1^2 + 0^2 + 0^2 = 1
//ʹ�á�����ָ�롱˼���ҳ�ѭ��������ָ�롱ÿ��������������ָ�롱ÿ����һ�������������ʱ����Ϊһ��ѭ�����ڡ�
//��ʱ���ж��ǲ�����Ϊ1�����ѭ�����ǵĻ����ǿ������������ǿ�������
//int Sum(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		int ret = n % 10;
//		sum += ret*ret;
//		n /= 10;
//	}
//	return sum;
//}
//bool isHappy(int n)
//{
//	int fast = n;
//	int slow = n;
//	do
//	{
//		slow = Sum(slow);
//		fast = Sum(fast);
//		fast = Sum(fast);
//	} while (fast != slow);
//	return slow == 1;
//}

//���⻹���Թ�Ϊ��ѧ������:1 - 9��ֻ��1��7�ǡ��������������������ǡ�����������
//������ǰ��n����1��7����ֱ�ӷ���true; ������n < 10���Ҳ�����1��7����ֱ�ӷ���false��
bool isHappy(int n)
{
	if (n == 1 || n == 7)
	{
		return true;
	}
	if (n < 10)
	{
		return false;
	}
	int sum = 0;
	while (n)
	{
		int ret = n % 10;
		sum += ret*ret;
		n /= 10;
	}
	return isHappy(sum);
}
int main()
{
	int num = 19;
	int ret = 0;
	ret = isHappy(num);
	system("pause");
	return 0;
}