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

	/*�൱�� �ڲ�ָ�뻥��  ���Ƕ�Ӧ�ڴ��ַ��ֵû�иĶ�
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
input a =5 b =10 �ı��ڴ��ַ�Ĵ洢ֵ
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
