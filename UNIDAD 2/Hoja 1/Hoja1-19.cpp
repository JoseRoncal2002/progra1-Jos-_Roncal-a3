#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float nota;

	cout << "Ingrese la nota del alumno: " << endl;
	cin >> nota;

	if (nota < 5)
	{
		cout << "Necesita estudiar" << endl;

	}

	if (nota >= 5 && nota<13)
	{
		cout << "Jalado" << endl;

	}

	if (nota >= 13 && nota<15)
	{
		cout << "Raspando" << endl;

	}

	if (nota >= 15 && nota < 20)
	{
		cout << "Sobresaliente" << endl;

	}

	if ( nota == 20)
	{
		cout << "Matricula de honor" << endl;

	}


	system("pause");
	return 0;
}
