#pragma once
#include <iostream>
#include <string>

class country {
private:
	string Name;
	int Population;
	double Area;

public:

	country();
	country(string, int, double);
	country(const country &);
	~country();
	string getname();
	void setname(string);
	int getpopulation();
	void setpopulation(int);
	double getarea();
	void setarea(double);
	void output();
};