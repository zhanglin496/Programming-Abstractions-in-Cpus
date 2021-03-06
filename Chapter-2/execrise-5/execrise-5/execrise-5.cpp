// execrise-5.cpp: 定义控制台应用程序的入口点。
/*不使用sqrt函数求x的平方根。
开始时，将平方根值取为x/2，赋值给g.
实际的平方根结果必须在g和g/x之间，在逐步逼近法的每一步，通过计算g和g/x的平均值得到一个新的平均值。
不断重复第2步直到g和g/x两值都足够接近，并达到硬件允许的精度要求为止。
在C++中，最好的检验方法是测试平均值与产生该值的两个值是否相等*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const double eps = 0.00000001;

double sqrt(double x);

int main()
{
	int x;
	cin >> x;
	cout << sqrt(x) << endl;
    return 0;
}

double sqrt(double x)
{
	double g, h;
	g = 2 * x;
	do
	{
		h = g;
		g = (g + x / g) / 2;
	} while (abs(g - h) > eps);
	return g;
}

