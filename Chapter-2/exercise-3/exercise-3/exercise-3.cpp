// exercise-3.cpp: 定义控制台应用程序的入口点。
/*编写一个判定函数isPerfect，函数传入整型值n， 如果n是完全数，函数返回true，如果不是返回false。
当找到一个完全数，将它在屏幕上显示出来。刚开始的两行输出会是6和28。你的程序需要在给定的数值区间找到另外两个数。
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

bool isPerfect(int x);

int main()
{
	int i;
	for (i = 1; i <= 9999; i++)
	{
		if (isPerfect(i))
			cout << i<<"    ";
	}
    return 0;
}

bool isPerfect(int x)
{
	int i, y = 1;
	for (i = 2; i < x; i++)
	{
		if (x%i == 0)
		{
			y += i;
		}
	}
	return(y == x);
}