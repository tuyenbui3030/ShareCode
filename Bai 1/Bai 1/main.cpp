//#include"CTime.h"
//int main() {
//	CTime Time;
//	cin >> Time;
//	if (!Time.checkTime())
//	{
//		cout << "Vui long doc huong dan truoc khi su dung!\n";
//		cout << "-----HUONG DAN SU DUNG-----\n";
//		cout << "1. Input HOURS: 0 <= HOURS < 24\n";
//		cout << "2. Input MINUTE: 0 <= MINUTE < 60\n";
//		cout << "2. Input SECONDS: 0 <= SECONDS < 60\n";
//	}
//	else
//	{
//		cout << "Output: ";
//		cout << Time;
//		cout << "Sau khi su dung toan tu ++Time: ";
//		cout << ++Time;
//		cout << "Sau khi su dung toan tu --Time: ";
//		cout << --Time;
//	}
//	cout << "Toan Tu So Sanh\n";
//	CTime a;
//	cout << "Enter hours 1: \n";
//	cin >> a;
//	CTime b;
//	cout << "Enter hours 2: \n";
//	cin >> b;
//	cout << "So sanh >\n";
//	if (a > b) {
//		cout << a;
//	}
//	else
//	{
//		cout << b;
//	}
//	cout << "So sanh <\n";
//	if (a < b) {
//		cout << a;
//	}
//	else
//	{
//		cout << b;
//	}
//	cout << "So sanh ==\n";
//	if (a == b) {
//		cout << "Bang Nhau\n";
//	}
//	else
//	{
//		cout << "Khong Bang Nhau\n";
//	}
//	cout << "So sanh !=\n";
//	if (a != b)
//	{
//		cout << "Khac nhau\n";
//	}
//	else
//	{
//		cout << "Giong nhau\n";
//	}
//	return 0;
//}
#include <windows.h>
#include <stdio.h>

int main() {
	if (IsProcessorFeaturePresent(PF_VIRT_FIRMWARE_ENABLED)) {
		printf("Virtualization is present.\n");
	}
	else {
		printf("Virtualization not present.\n");
	}
	return 0;
}