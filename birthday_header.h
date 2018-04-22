#pragma once

#include <iostream>
#include <string>

using namespace std;

class birthday {
public:
	void setMonth(string m);
	void setDay(int d);
	void setYear(int y);
	string getMonth();
	int getDay();
	int getYear();

	void convertBirthday();


	//constructor
	birthday(string m, int d = 0, int y = 0);

private:
	string month;
	int day;
	int year;
};






class invalidDay {
public:
	invalidDay()
	{
		message = "Please enter a date between 1 - 31.\n";
	}

	invalidDay(string str)
	{
		message = str + "Needs to be a valid day of month (1-31).\n";
	}

	string what()
	{
		return message;
	}

private:
	string message;
};


class invalidMonth {
public:
	invalidMonth()
	{
		message = "Please enter a Month between 1 - 12.\n";
	}

	invalidMonth(string str)
	{
		message = str + "Needs to be a valid month (1-12).\n";
	}

	string what()
	{
		return message;
	}

private:
	string message;
};
