//1.c ������ӡ�������� 
#include <stdio.h>
#define NAME "Yuanqiu"
#define SURNAME "Wang"

int main(void)
{
	printf("%s %s\n\n", NAME, SURNAME);
	
	printf("%s\n%s\n\n", NAME, SURNAME);
	
	printf("%s ", NAME);
	printf("%s\n", SURNAME);
	
	return 0;
}
