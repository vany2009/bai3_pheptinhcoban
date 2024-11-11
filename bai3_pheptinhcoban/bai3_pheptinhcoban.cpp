// bai3_pheptinhcoban.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
double tinhtong(double a, double b )  {
	return a + b;
	}
double tinhhieu(double a, double b) {
	return a - b;
}
double tinhtich(double a, double b) {
	return a * b;
}
double tinhthuong(double a, double b) {
	return round( a / b);
}
int main() {
	cout << "CHUONG TRINH CAC PHEP TINH CO BAN\n";
	double so1, so2, tong, hieu, tich, thuong;
	cout << "nhap so1:"; cin >> so1;
	cout << "nhap so2:"; cin >> so2;
	tong = so1 + so2;
	hieu = so1 - so2;
	tich = so1 * so2;
	thuong = so1 / so2;
	cout << " tong hai so thong thuong:" << so1 << "+" << so2 << "=" << tong << endl;
	cout << " tong hai so su dung ham:" << so1 << "+" << so2 << "=" << tinhtong(so1, so2) << endl;
	cout << " hieu :" << so1 << "-" << so2 << "=" << hieu << endl;
	cout << " tich:" << so1 << "*" << so2 << "=" << tich << endl;
	cout << " thuong:" << so1 << "/" << so2 << "=" << thuong << endl;
	return 0;
}
	
