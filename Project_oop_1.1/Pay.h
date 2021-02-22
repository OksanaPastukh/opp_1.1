#pragma once
using namespace std;

class Pay
{
	double first;
	int second;
public:
	double GetFirst() const { return first; }
	int GetSecond() const { return second; }
	bool SetFirst(double value);
	bool SetSecond(int value);
	bool Init(double, int);
	void Read();
	void Display();
	double Summa( int countDayInMonth);

};

