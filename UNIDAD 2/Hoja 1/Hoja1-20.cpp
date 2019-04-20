#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int creditos;

	cout << "Ingrese la cantidad de creditos acumulados: " << endl;
	cin >> creditos;

	if (creditos < 32)
	{
		cout << "El alumno se encuentra en el Primer anio" << endl;

	}

	if (creditos >= 32 && creditos <= 63)
	{
		cout << "El alumno se encuentra en el Segundo anio" << endl;

	}

	if (creditos >= 64 && creditos <= 95)
	{
		cout << "El alumno se encuentra en el Tercer año" << endl;

	}

	if (creditos > 95)
	{
		cout << "El alumno se encuentra en el Cuarto anio" << endl;

	}


	system("pause");
	return 0;
}
