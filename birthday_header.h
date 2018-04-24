#pragma once

#include <iostream>
#include <string>

using namespace std;

class birthday {
public:
	void setMonth(int m);
	void setDay(int d, int m, int y);
	void setYear(int y);
	int getMonth();
	int getDay();
	int getYear();

	void convertBirthday();


	//constructor
	birthday(int m = 0, int d = 0, int y = 0);

private:
	int month;
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
		message = str + "Needs to be a valid day (1-30/31 or Feb/account for Leap Years).\n";
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
		message = "Please enter a month between 1 - 12.\n";
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

class invalidYear {
public:
	invalidYear()
	{
		message = "Please enter a valid year (1900-2099).\n";
	}

	invalidYear(string str)
	{
		message = str + "Needs to be a valid year (1900-2099).\n";
	}

	string what()
	{
		return message;
	}

private:
	string message;
};
