#include <iostream>
#include <string>
#include "birthday_header.h"

using namespace std;

//constructor implementation
birthday::birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
};

//set
void birthday::setMonth(int m)
{
	if (m >= 1 && m <= 12)
		month = m;
	else if (m <= 0 || m >= 31)
		throw invalidMonth("Error.");
};

void birthday::setDay(int d, int m, int y)
{

	if ((m == 2 && y % 4 == 0) && (d >= 1 && d <= 29))
		day = d;
	else if ((m == 2 && y % 4 == 0) && (d <= 0 || d > 29))
		throw invalidDay("Leap Year Error.");

	else if ((m == 2) && (d >= 1 && d <= 28))
		day = d;
	else if ((m == 2) && (d <=0 || d > 28))
		throw invalidDay("Error.");

	else if (d >= 1 && d <= 31)		
		day = d;
	else if (d <= 0 || d >= 31)
		throw invalidDay("Error.");
};

void birthday::setYear(int y)
{
	if (y >= 1900 && y <= 2099)
		year = y;
	else if (y <= 1900 || y >= 2099)
		throw invalidYear("Error.");
};

//get
int birthday::getMonth()
{
	return month;
}

int birthday::getDay()
{
	return day;
}

int birthday::getYear()
{
	return year;
}

//convert
void birthday::convertBirthday()
{
	string monthText;

	//getMonth();
	//getDay();
	//getYear();

	if (month == 1)
		monthText = "January";
	else if (month == 2)
		monthText = "Feburary";
	else if (month == 3)
		monthText = "March";
	else if (month == 4)
		monthText = "April";
	else if (month == 5)
		monthText = "May";
	else if (month == 6)
		monthText = "June";
	else if (month == 7)
		monthText = "July";
	else if (month == 8)
		monthText = "August";
	else if (month == 9)
		monthText = "September";
	else if (month == 10)
		monthText = "October";
	else if (month == 11)
		monthText = "November";
	else if (month == 12)
		monthText = "December";
	else
		monthText = "Re-enter a valid Month";

	cout << "Your formatted birthday: " << monthText << " " << day << ", " << year;
}
