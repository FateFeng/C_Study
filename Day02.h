#pragma once
#include <iostream>

class Day02
{
public:	void stringTest();


public: void myStrCat(char* out, char* input) {
	strcat_s(out,4, input);
	printf("myStrCat\n");
	puts(out);
	
};
public: void myStrCopy(char out[], const int limit, char* input) {
	char c[sizeof(out)];
	char*  a= c;
	for (; *a != '\0', *input != '\0'; a++, input++) {
		*a = *input;
	}

	*a = '\0';
	printf("myStrCopy\n");
	puts(c);
};
};
