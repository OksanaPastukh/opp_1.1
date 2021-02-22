#include "Pay.h"
#include <iostream>
using namespace std;
Pay makePay(double x, double y)
{
	Pay z;
	if (!z.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}
int main()
{
	Pay z;
	z.Read();
	z.Display();
	cout << "Summa = " << z.Summa(30) << endl << endl;
	double x, y;
	cout << " Oklad = "; cin >> x;
	cout << " Days worked = "; cin >> y;
	z = makePay(x, y);
	z.Display();
	cout << "Summa = " << z.Summa(30) << endl;
	cin.get();
	return 0;
}