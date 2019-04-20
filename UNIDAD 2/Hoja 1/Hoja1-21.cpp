#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float monto,interes,montoT;

	cout << "Ingrese el monto del prestamo en $: " << endl;
	cin >> monto;

	if (monto < 5000)
	{
		interes = (monto * 3) / 100;

	}

	if (monto >= 5000 && monto < 10000)
	{
		interes = (monto * 2) / 100;

	}

	else
	{
		interes = (monto * 1) / 100;
	}

	montoT = monto + interes;

	cout << "El monto total a pagar es de $ "<<montoT << endl;


	system("pause");
	return 0;
}
