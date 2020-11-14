#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char * removeOuterParentheses(char * S)
{
	int i, sum = 0, j = 0;
	int len = strlen(S);
	for (i = 0; i<len; i++)
	{
		if (S[i] == '(')
		{
			sum += 1;
		}
		else
		{
			sum -= 1;
		}
		if ((S[i] == '(') && (sum>1))
		{
			S[j] = '(';
			j++;
		}
		if (S[i] == ')' && sum > 0)
		{
			S[j] = ')';
			j++;
		}
	}
	S[j] = '\0';
	return S;
}
int main()
{
	char S[] = ("(()())");
	//printf("%s", S);
	char *s = removeOuterParentheses(S);
	printf("%s", s);
	system("pause");
	return 0;
}