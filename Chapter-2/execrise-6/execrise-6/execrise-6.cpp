// execrise-6.cpp: 定义控制台应用程序的入口点。
/*欧几里得算法
计算日期通用算法
某年份分别用19、4和7相除，并将余数分别存入a、b和c中。若除数为偶数，则设其余数为0，不考虑商。
以下算法与之相同。
用19a+20除以30，并将余数记在d中。
最后，用2b+4c+6d+3或2b+4c+6d+4除以7。其中，第一个式子的年份应该在1700到1900之间，而第二个式子在
1800到1899之间，并将余数记在e中。
然后，复活节日期应在3月22+d+e日，或者当d+e大于9时，其复活节日期应在4月+d+e-9日。
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void findEaster(int year, string & month, int & day);
void Easter(int year, string & month, int & day);

int main()
{
	int year, day;
	string month;
	cout << "plase input your year(1700——2099）" << endl;
	cin >> year;
	if (year > 2099 || year < 1700)
	{
		cerr << "error" << endl;
		exit(EXIT_FAILURE);
	}
	if (year <= 1899)
		findEaster(year, month, day);
	else 
		Easter(year, month, day);
	cout << month << day << "日" << endl;
    return 0;
}

void findEaster(int year, string & month, int & day)		//仅能计算1700——1899年之间
{
	int a, b, c, d, e;
	a = year % 29, b = year % 4, c = year % 7;		//忽略若除数为偶数，则设其余数为0，有点看不懂什么意思，凉
	d = (19 * a + 20) / 30;
	if (year >= 1700 && year <= 1799)
		e = (2 * b + 4 * c + 6 * d + 3) % 7;
	else
		e = (2 * b + 4 * c + 6 * d + 4) % 7;
	if (d + e > 9)
		month = "4月", day = d + e - 9;
	else
		month = "3月", day = 22 + d + e;
}

//仅限于1900——2099年
void Easter(int year, string & month, int & day)
{
	int n, a, q, b, m, w, c;
	n = year - 1900;
	a = n % 19;
	q = n / 4;
	b = (7 * a + 1) / 19;
	m = (11 * a + 4 - b) % 29;
	w = (n + q + 31 - m)%7;
	c = 25 - m - w;
	if (c > 0)
		month = "4月", day = c;
	else 
		if (c < 0)
			month = "3月", day = 31 + c;
		else
			month = "3月", day = 31;



}