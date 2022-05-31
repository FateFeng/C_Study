// C_Study.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

//#define DAY01
//#define DAY02
#define DAY03

#include <iostream>
#include "Day01.h"
#include "Day02.h"
#include "Day03.h"



using namespace std;

int main()
{
#ifdef DAY01
    Day01 day1;
    day1.selfPrint();
#endif // DAY01

#ifdef DAY02
    Day02 day2;
    day2.stringTest();


    char a[4], b[5];
    gets_s(a);
    gets_s(b);

    day2.myStrCopy(a, 4, b);

    printf("\n");
    puts(a);
    puts(b);


    day2.myStrCat(a, b);

    printf("\n");
    puts(a);
    puts(b);
#endif // DAY02

#ifdef DAY03
    Day03 day3;
    int x = 5;
    int y = 10;
    day3.swap(x, y);
    cout << "a:" << x << " ; b: " << y << endl;
    day3.swap(&x, &y);
    cout << "a:" << x << " ; b: " << y << endl;
    
#endif // DAY03

    
    system("pause");
    return 0;
}
