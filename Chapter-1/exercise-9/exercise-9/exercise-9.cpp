// exercise-9.cpp: 定义控制台应用程序的入口点。
//有一个灯塔，每层的灯数都是上一层的2倍，共有765盏灯，编程求出最上层和最下层的灯数。

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a, b = 0, x, i, sum;
	for (a = 1; a <= 765; a++)
	{
		b = a;
		sum = b;
		for (x = 2; x <= 8; x++)
		{
			b *= 2;
			sum +=b;
		}
		if (sum == 765)
			break;
	}
	cout <<"最低层为"<< a << endl;
	cout << "最高层为" << b << endl;
    return 0;
}

