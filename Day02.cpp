#include "Day02.h"

void Day02::stringTest()
{
	char s[80], * p;
	int i[99] = {1,2,1};
	gets_s(s);

	printf("----------------------------------\n");

	for ( p = s; *p != '\0'; p++)
	{
		putchar(*p);
		*p += 1;
	}

	char a[10] = { 's','f' };

	printf("\n");
	puts(a);

	printf("\n");
	puts(s);
}
 