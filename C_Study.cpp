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
    return 0;
#endif // DAY03

    

    
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
