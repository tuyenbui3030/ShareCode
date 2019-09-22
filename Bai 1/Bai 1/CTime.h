#pragma once
#include<iostream>
using namespace std;
class CTime
{
public:
	CTime();
	~CTime();
	friend istream& operator >>(istream&, CTime&);
	friend ostream& operator <<(ostream&, CTime);
	bool checkTime();
	bool operator>(CTime);
	bool operator<(CTime);
	bool operator==(CTime);
	bool operator!=(CTime);
	CTime operator++();
	CTime operator--();
private:
	int hours;
	int min;
	int sec;
};
