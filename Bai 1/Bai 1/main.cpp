#include"CTime.h"
int main() {
	CTime Time;
	cin >> Time;
	if (!Time.checkTime())
	{
		cout << "Vui long doc huong dan truoc khi su dung!\n";
		cout << "-----HUONG DAN SU DUNG-----\n";
		cout << "1. Input HOURS: 0 <= HOURS < 24\n";
		cout << "2. Input MINUTE: 0 <= MINUTE < 60\n";
		cout << "2. Input SECONDS: 0 <= SECONDS < 60\n";
	}
	else {
		cout << "Output: ";
		cout << Time;
		++Time;
		cout << "Sau khi su dung toan tu ++Time: ";
		cout << Time;
	}
	return 0;
}
