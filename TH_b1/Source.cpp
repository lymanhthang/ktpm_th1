#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void displayMenu() {
	cout << "\n=== MENU ===" << endl;
	cout << "1. Kiem tra so nguyen to" << endl;
	cout << "2. Kiem tra nam nhuan" << endl;
	cout << "0. Thoat" << endl;
	cout << "Lua chon cua ban: ";
}

int main() {
	int choice;

	do {
		displayMenu();
		cin >> choice;

		switch (choice) {
		case 1: {
			int num;
			cout << "Nhap mot so nguyen duong: ";
			cin >> num;
			if (num < 0) {
				cout << "Vui long nhap so nguyen duong!" << endl;
			}
			else {
				if (isPrime(num)) {
					cout << num << " la so nguyen to" << endl;
				}
				else {
					cout << num << " khong phai la so nguyen to" << endl;
				}
			}
			break;
		}
		
		case 0:
			//cout << "Tam biet!" << endl;
			break;
		default:
			cout << "Lua chon khong hop le! Vui long chon lai." << endl;
		}
	} while (choice != 0);

	return 0;
}