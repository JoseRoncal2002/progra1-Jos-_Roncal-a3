

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int experiencia;
	float aumento1,aumento2,sueldoT;
	char LugarN;
	bool Exp1, Exp2, Lima, Fuera;

	cout << "Ingrese anios de experiencia:" << endl;
	cin >> experiencia;
	cout << "Ingrese lugar de nacimiento:" << endl;
	cin >> LugarN;
	
	Exp1 = (experiencia <= 5);
	Exp2 = (experiencia > 5);

	Lima = (LugarN == 'L');
	Fuera = (LugarN == 'F');

	aumento1 = (900+((900*experiencia)/100))*Exp1+(1000+ ((900 * experiencia) / 100))*Exp2;
	aumento2 = ((aumento1 * 15) / 100)*Lima + ((aumento1 * 20) / 100)*Fuera;
	sueldoT = aumento1 + aumento2;

	cout << "Sueldo Total:" << sueldoT<<endl;

	system("pause");
	return 0;
}


