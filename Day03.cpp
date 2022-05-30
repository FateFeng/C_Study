#include "Day03.h"
#include<iostream>

using namespace std;

void Day03::test()
{
	cout << "sd" << endl;
}

void Day03::swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	cout << "\"a\":" << a << " ; \"b\": " << b << endl;

	/*相当于 内部指针互换  但是对应内存地址的值没有改动
	cout << "\"*a\":" << a << " ; \"*b\": " << b << endl;
	cout << "\"*a\":" << *a << " ; \"*b\": " << *b << endl;
	int* t = a;
	a = b;
	b = t;
	cout << "\"*a\":" << a << " ; \"*b\": " << b << endl;
	cout << "\"*a\":" << *a << " ; \"*b\": " << *b << endl;*/
	//"*a":10 ; "*b": 5
}

/*
input a =5 b =10 改变内存地址的存储值
*/
void Day03::swap(int* a, int* b)
{
	cout << "\"*a\":" << a << " ; \"*b\": " << b << endl;
	cout << "\"*a\":" << *a << " ; \"*b\": " << *b << endl;
	int t = *a;
	*a = *b;
	*b = t;
	cout << "\"*a\":" << a << " ; \"*b\": " << b << endl;
	cout << "\"*a\":" << *a << " ; \"*b\": " << *b << endl;
}
