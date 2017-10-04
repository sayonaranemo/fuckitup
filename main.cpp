#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cstdio>

#include "base.h"

using namespace std;


country create_country()
{
	string Z;
	int X;
	double T;

	cout << "Enter the name of the country"; cin >> Z;
	cout << "Enter the population of the country"; cin >> X;
	cout << "Enter the area of the country"; cin >> T;

	country Object(Z, X, T);

	return Object;
}

void printinfo(country Object)
{
	Object.output();
}

int main()
{
	// Without params

	country Object1;
	Object1.output();

	//With params

	country Object2("United Kingdom", 2, 47000000);
		Object2.output();

	//Copy construct

		country Object3 = Object2;

		Object3.setname("France");
		Object3.setpopulation(10);
		Object3.setarea(21000000);

		printinfo(Object3);
		Object1 = create_country();

		Object2.output();
		Object3.output();
		Object1.output();

		system("pause");

		return 0;
	



}