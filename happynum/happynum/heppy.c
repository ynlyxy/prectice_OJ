#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
//编写一个算法来判断一个数是不是“快乐数”。
//输入: 19
//输出 : true
// 解释 :该数字所有位数的平方和，的到新数后再求平方和，如此重复，最后的结果必定为1.
//	1^2 + 9^2 = 82
//	8^2 + 2^2 = 68
//	6^2 + 8^2 = 100
//	1^2 + 0^2 + 0^2 = 1
//使用“快慢指针”思想找出循环：“快指针”每次走两步，“慢指针”每次走一步，当二者相等时，即为一个循环周期。
//此时，判断是不是因为1引起的循环，是的话就是快乐数，否则不是快乐数。
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

//本题还可以归为数学规律题:1 - 9中只有1和7是“快乐数”，其他均不是“快乐数”，
//故若当前的n等于1或7，则直接返回true; 否则，若n < 10，且不等于1或7，则直接返回false。
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