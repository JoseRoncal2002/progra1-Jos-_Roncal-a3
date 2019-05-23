#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

double area(int radio )
{
	
	return (radio*radio)*3.14;;

}

int main()
{
	double circunferencia;

	cout << "Ingrese un radio de circunferencia" << endl;
	cin >> circunferencia;
	while (circunferencia < 0)
	{
		cout << "Ingrese un radio de circunferencia" << endl;
		cin >> circunferencia;
	}

	cout<<"El area de la circunferencia es: "<<area(circunferencia);

	_getch();
}

