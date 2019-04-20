// ConsoleApplication39.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int caramelos1, caramelos2, caramelos3;
	float montoP, montoC;
	
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 1:"<<endl; 
	cin >> caramelos1;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 2:" << endl;
	cin >> caramelos2;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 3:" << endl;
	cin >> caramelos3;
	cout << "Ingrese el Monto de la Propina:" << endl;
	cin >> montoP;

	montoC = caramelos1*(0.75) + caramelos2*(1.15) + caramelos3*(0.65);
	cout << "El monto total de la compra es:" << montoC<<endl;

	if (montoC>montoP)
	{
		cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;
	}

	if (montoC<=montoP)
	{
		cout << "LA PROPINA FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;
	}

	system("pause");
	return 0;
}


