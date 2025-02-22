
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float price,discount;

	cout << "Welcome to the cerial isle" << endl;
	cout << "-------------------------------" << endl;
	cout << "How much is teh total of all teh breakfast cereals you chose : ";
	cin >> price;

	if (price < 50) {
		discount = price * 0.10;
		price = price - discount;

		cout << "Your toal is : R" << price;

	}else if (price > 49 && price < 71) {
		discount = price * 0.20;
		price = price - discount;

		cout << "Your toal is : R" << price;

	}else if (price > 70 && price < 101) {
		discount = price * 0.30;
		price = price - discount;

		cout << "Your toal is : R" << price;

	}else if (price > 99 && price < 201) {
		discount = price * 0.40;
		price = price - discount;

		cout << "Your toal is : R" << price;

	} else if (price > 200) {

		discount = price * 0.50;
		price = price - discount;

		cout << "Your toal is : R" << price;

	}
	else if (price == 0) {
		cout << "GO AND GET YOURSELF SOME CEREAL";
	}

	return 0;

}
