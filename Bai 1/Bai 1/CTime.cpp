#include "CTime.h"

CTime::CTime()
{
	hours = 0;
	min = 0;
	sec = 0;
}

CTime::~CTime()
{
}
// Toán tư nhập
istream& operator>>(istream& is, CTime& in)
{
	cout << "Enter Hours: ";
	is >> in.hours;
	cout << "Enter Minute: ";
	is >> in.min;
	cout << "Emter Seconds: ";
	is >> in.sec;
	return is;
}
// Toán tử xuất
ostream& operator<<(ostream& os, CTime out)
{
	os << out.hours << ":" << out.min << ":" << out.sec << endl;
	return os;
}
// check thời gian hợp lệ
bool CTime::checkTime()
{
	if (hours > 23 || hours < 0)
	{
		return false;
	}
	if (min > 59 || hours < 0)
	{
		return false;
	}
	if (sec > 59 || hours < 0)
	{
		return false;
	}
	return true;
}
// Toán tử ++Time
CTime CTime::operator++()
{
	if (this->sec < 59)
	{
		++(this->sec);
	}
	else
	{
		this->sec = 0;
		++(this->min);
	}
	if (this->min > 59)
	{
		this->min = 0;
		++(this->hours);
	}
	if (this->hours > 23)
	{
		this->hours = 0;
	}
	return *this;
}
CTime CTime::operator--()
{
	if (this->sec > 0)
	{
		--(this->sec);
	}
	else
	{
		this->sec = 59;
		--(this->min);
	}
	if (this->min < 0)
	{
		this->min = 59;
		--(this->hours);
	}
	if (this->hours < 0)
	{
		this->hours = 23;
	}
	return *this;
}
// Toán tử >
bool CTime::operator>(CTime b)
{
	if (hours > b.hours) {
		return true;
	}
	else if (hours == b.hours)
	{
		if (min > b.min)
		{
			return true;
		}
		else if (min == b.min)
		{
			if (sec > b.sec)
			{
				return true;
			}
		}
	}
	return false;
}
// Toán tử <
bool CTime::operator<(CTime b) {
	if (hours < b.hours) {
		return true;
	}
	else if (hours == b.hours)
	{
		if (min < b.min)
		{
			return true;
		}
		else if (min == b.min)
		{
			if (sec < b.sec)
			{
				return true;
			}
		}
	}
	return false;
}
// Toán tử ==
bool CTime::operator==(CTime b)
{
	if (hours == b.hours) 
	{
		if (min == b.min)
		{
			if (sec == b.sec)
			{
				return true;
			}
		}
	}
	return false;
}
// Toán tử !=
bool CTime::operator!=(CTime b)
{
	if (hours == b.hours)
	{
		if (min == b.min)
		{
			if (sec == b.sec)
			{
				return false;
			}
		}
	}
	return true;
}