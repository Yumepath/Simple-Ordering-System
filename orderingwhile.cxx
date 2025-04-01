#include <iostream>
using namespace std;
int main()
{
	int ord;
	int qua;
	ems:
	cout << "\t\t\tWelcome to Mc'Bee" << endl;
	cout << "Here is our menu" << endl;
	cout << "1. Burger" << endl;
	cout << "2. Pizza" << endl;
	cout << "3. Fries" <<endl;
	cout << "Please kindly select your order: ";
	cin >> ord;
	
	switch (ord){
		case 1:
		cout << "You choosed Burger" << endl;
		break;
		case 2:
		cout << "You choosed Pizza" << endl;
		break;
		case 3:
		cout << "You choosed Fries" << endl;
		break;
		default:
		cout << "Invalid output" << endl;
		break;
	}
	cout << "Do you still want to continue? " <<endl;
	cout << "Press 1 if yes, and 2 if no: ";
	cin >> qua;
	while (qua == 1){
		goto ems;
	}
		
		
	cout << "Enjoy your food, please come again!!" <<endl;

	return 0;
}