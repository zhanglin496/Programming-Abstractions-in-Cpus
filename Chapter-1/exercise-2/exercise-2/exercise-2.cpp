// exercise-2.cpp: 定义控制台应用程序的入口点。
//编写一个程序，从用户处读取数据直到用户输入0信号量为止。当信号量出现时，程序需要显示读取数据的最大值，

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int x, y = 0, z = 0;
	cout << "This program finds the largest interger in a list" << endl;
	cout << "Enter 0 to signal the end of the list" << endl;
	while (true)
	{
		cin >> x;
		cout << "?:    " << x << endl;
		if (x == 0)
			break;
		z = y;
		if (x > y)
			y = x;
		if (y < z)
			z = y;
	}
	cout << "The largest value was: " << y << endl;
	cout << "The second largest value was: " << z << endl;
    return 0;
}

