#include "Pay.h"
#include <iostream>

bool Pay::SetFirst(double value)
{
	if (value >= 0)
	{
		first = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Pay::SetSecond(int value)
{
	if (value >= 0)
	{
		second = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Pay::Init(double x, int y)
{
	return (SetFirst(x) && SetSecond(y));
}
void Pay::Read()
{
	double x;
	int y;
	do
	{
		cout << " Oklad = "; cin >> x;
		cout << " Days worked = "; cin >> y;
	} while (!Init(x, y));
}
void Pay::Display()
{
	cout << endl;
	cout << " Oklad = " << first << endl;
	cout << " Days worked = " << second << endl;
}
double Pay::Summa(int countDayInMonth)
{
	return (first / ((1. * countDayInMonth)* (1. * second)));
}
