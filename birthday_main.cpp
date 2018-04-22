#include <iostream>
#include <string>
#include "birthday_header.h"

using namespace std;

int main()
{
	string enterM;
	int enterD = 0;
	int enterY = 0;
	char anyKey;

	birthday converter(enterM, enterD, enterY);


	cout << "Please enter your birtday in the following format: (8-15-1995)\n";
	cout << "Month(1-12): \n";
	cin >> enterM;

	cout << "Day(1-31): \n";
	cin >> enterD;
	cout << "Year(ex: 2001): \n";
	cin >> enterY;

	converter.setMonth(enterM);
	converter.setDay(enterD);
	converter.setYear(enterY);

	converter.convertBirthday();

	cout << endl;
	cout << "press any key to exit.\n";
	cin >> anyKey;



	return 0;
}
