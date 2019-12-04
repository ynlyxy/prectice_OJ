#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
//ÊäÈë£ºaddress = "1.1.1.1"Êä³ö£º"1[.]1[.]1[.]1"
char * defangIPaddr(char * address)
{
	char *str = (char*)malloc(2 * sizeof(char));
	char *ret = str;
	while (*address)
	{
		if (*address == '.')
		{
			*str++ = '[';
			*str++ = '.';
			*str++ = ']';
			++address;
		}
		else
		{
			*str = *address;
			++str;
			++address;
		}
	}
	*str = '\0';
	return ret;
}
int main()
{
	char *address = "1.1.1.1";
	int *s;
	s=defangIPaddr(address);
	printf("%s", s);
	system("pause");
	return 0;
}