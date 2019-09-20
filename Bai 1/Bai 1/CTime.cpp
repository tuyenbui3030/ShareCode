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
ostream &operator<<(ostream&os,CTime out)
{
	os << out.hours << ":" << out.min << ":" << out.sec << endl;
	return os;
}
bool CTime::checkTime()
{
	if (hours > 23 || hours < 0)
	{
		return false;
	}
	if (min > 59 || hours < 0){
		return false;
	}
	if (sec > 59 || hours < 0) {
		return false;
	}
	return true;
}
CTime CTime::operator++() {
	if (this->sec + 1 <= 59)
	{
		++(this->sec);
	}
	if(this->sec == 60)
	{
		this->sec = 0;
		++(this->min);
	}
	if (this->min + 1 >= 59 && this->sec == 0) {
		this->min = 0;
		++(this->hours);
	}
	if (this->hours + 1 >= 24 && this->min == 0)
	{
		this->hours = 0;
	}
	return *this;
}