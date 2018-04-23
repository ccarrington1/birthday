#include <iostream>
#include <string>
#include "birthday_header.h"

using namespace std;

//constructor implementation
birthday::birthday(string m, int d, int y)
{
	month = m;
	day = d;
	year = y;
};

//set
void birthday::setMonth(string m)
{
		month = m;
};

void birthday::setDay(int d)
{
	if (d >= 1 && d <= 31)
		day = d;
	else if (d <= 0 && d >= 31)
		throw invalidDay("message");
};

void birthday::setYear(int y)
{
	year = y;
};

//get
string birthday::getMonth()
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

	getMonth();
	getDay();
	getYear();

	if (month == "1")
		month = "January";
	else if (month == "2")
		month = "Feburary";
	else if (month == "3")
		month = "March";
	else if (month == "4")
		month = "April";
	else if (month == "5")
		month = "May";
	else if (month == "6")
		month = "June";
	else if (month == "7")
		month = "July";
	else if (month == "8")
		month = "August";
	else if (month == "9")
		month = "September";
	else if (month == "10")
		month = "October";
	else if (month == "11")
		month = "November";
	else if (month == "12")
		month = "December";

	cout << "Your formatted birthday: " << month << " " << day << ", " << year;
}
