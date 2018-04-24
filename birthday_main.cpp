#include <iostream>
#include <string>
#include "birthday_header.h"

using namespace std;

int main()
{
	int enterM = 0;
	int enterD = 0;
	int enterY = 0;
	char selection;

	birthday converter(enterM, enterD, enterY);

	cout << "Would you like to convert your birthday? (Y/N)\n" << endl;
	cin >> selection;

	if (selection == 'y' || selection == 'Y')
		do {

			cout << "Please enter your birtday in the following format: (8-15-1995)\n";

			try {
				cout << "Year(ex: 2001): \n";
				cin >> enterY;
				converter.setYear(enterY);
			}
			catch (invalidYear obj) {
				cout << "Testing: " << obj.what() << endl;
			}

			try {
			cout << "Month(1-12): \n";
			cin >> enterM;
			converter.setMonth(enterM);
			}
			catch (invalidMonth obj) {
				cout << "Testing: " << obj.what() << endl;
			}

			try {
				cout << "Day(1-31): \n";
				cin >> enterD;
				converter.setDay(enterD, enterM, enterY);
			}
			catch (invalidDay obj) {
				cout << "Testing: " << obj.what() << endl;
			}

		

			converter.convertBirthday();

			cout << endl;
		} while (selection == 'y' || selection == 'Y');
	else
		exit(0);

	return 0;
}
