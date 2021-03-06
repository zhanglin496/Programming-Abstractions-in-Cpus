// exerise-2.cpp: 定义控制台应用程序的入口点。
/*Wind Chill（℉）=35.74+0.6215t-（v^0.16)+0.4275t（v^0.16)
其中，t是华氏温度，v是风速，单位是英里/小时。
编写一个函数WindChill，参数为t和v,返回风寒指数。为了达到这一目的，你的函数必须考虑以下两种情况。
如果没有风，windChill必须返回原始温度t。
如果温度高于40℉，防寒指数未定义，此时你的函数必须使用正确的信息来调用error函数。*/

#include "stdafx.h"
#include "iostream"
#include <cmath>
#include <string>
using namespace std;

void windChill_execl();
int windChill(int t, int v);

int main()
{
	
	int v, t;
	windChill_execl();
	cout << "Temperature: " << endl;
	cin >> t;
	cout << "Wind: " << endl;
	cin >> v;
	cout << "风寒指数：" << windChill(t, v) << endl;
    return 0;
}

void windChill_execl()
{
	int windChill, i, j, t = 40, v = 5;
	
	for (i = 1; i <= 18; i++)
	{
		if (i < 18)
		{
			cout <<"    "<< t ;
			t -= 5;
		}
		else
			cout << "    " << t << endl;
	}
	t = 40;
	for (j = 1; j <= 12; j++)
	{
		t = 40;
		cout << v << "    ";
		for (i = 1; i <= 18; i++)
		{
			windChill = int(35.74 + 0.6215*t - 35.75*pow(v, 0.16) + 0.4275*t*pow(v, 0.16));
				t -= 5;
			if (i < 18)
			{
				cout << windChill << "    ";
			}
			else
				cout << windChill << endl;
		}
		
		v += 5;
	}
}

int windChill(int t, int v)
{
	double windChill;
	int x;
	if (v == 0)
		x = t;
	else
	{
		if (t <= 40)
		{
			windChill = 35.74 + 0.6215*t - 35.75*pow(v, 0.16) + 0.4275*t*pow(v, 0.16);
			x =(int) windChill;
		}
		else
			cerr <<"error"<< endl;
	}
	return x;
}