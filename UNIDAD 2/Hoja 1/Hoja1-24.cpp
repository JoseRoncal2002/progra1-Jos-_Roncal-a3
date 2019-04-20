
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int numeroComputadoras;
	float montoBase, descuento, montoFinal;

	cout << "Ingrese el numero de computadoras a comprar: "<<endl; 
	cin >> numeroComputadoras;

	montoBase = numeroComputadoras * 760;
	
	if (numeroComputadoras<5)
	{
		descuento = (montoBase * 10) / 100;
	}

	if (numeroComputadoras >= 5 && numeroComputadoras<10)
	{
		descuento = (montoBase * 20) / 100;
	}

	if (numeroComputadoras >= 10)
	{
		descuento = (montoBase * 40) / 100;
	}

	montoFinal = montoBase - descuento;

	cout << "El costo es de " << montoBase << " y el total aplicando el descuento es de " << montoFinal << endl;

	system("pause");
	return 0;
}


