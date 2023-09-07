#include <iostream>
using namespace std;

int main() {

	int age;
	cin >> age;

	/*
	Free age 0-3
	Discounted age 4-6
	Normal age 7+



	*/



	if (age <= 3) {
		cout << "Free";
	}
	else if (age <= 6 && age >= 4) {
		cout << "Discounted";
	}
	else {
		cout << "Normal";
	}
}
