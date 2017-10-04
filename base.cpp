#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cstdio>

#include "base.h"

using namespace std;


country::country()
{
	Name = "";
	Population = 0;
	Area = 0;
}

country::country(string Temp, int X, double Z)
{
	Name = Temp;
	Population = X;
	Area = Z;

}

country::country(const country &Object)
{
	Name = Object.Name;
	Population = Object.Population;
	Area = Object.Area;
}

country::~country()
{
	cout << "Destructor" << endl;
}

string country::getname()
{
	return Name;
}

int country::getpopulation()
{
	return Population;
}

double country::getarea()
{
	return Area;
}

void country::setname(string Temp)
{
	Name=Temp;
}

void country::setpopulation(int X)
{
	Population = X;
}

void country::setarea(double Z)
{
	Area = Z;
}

void country::output()
{
	cout <<setw(5)<<"Name" << setw(16) << Name << endl;
	cout <<setw(5) <<" Population" << setw(16) << Population << endl;
	cout << setw(5) << "Area" << setw(16) << Area << endl;
}