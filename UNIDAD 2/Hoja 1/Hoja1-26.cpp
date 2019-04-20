
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int edad;
	string tipoEntrada;
	float descuento;
	float totalPagar;
	
	cout << "Ingrese la edad del espectador: "<<endl; 
	cin >> edad;

	

	if (edad<5)
	{
		cout << "No puede ingesar" << endl;
	}

	if (edad >= 5 && edad<=14)
	{
		tipoEntrada = "Entrada 1";
		descuento = (15 * 35) / 100;
		totalPagar = 15 - descuento;
		cout << "El tipo de la entrada es " << tipoEntrada << " y el costo es de " << totalPagar;
	}

	if (edad >=15 && edad <= 19)
	{
		tipoEntrada = "Entrada 2";
		descuento = (15 * 25) / 100;
		totalPagar = 15 - descuento;
		cout << "El tipo de la entrada es " << tipoEntrada << " y el costo es de " << totalPagar;
	}

	if (edad >= 20 && edad <= 45)
	{
		tipoEntrada = "Entrada 3";
		descuento = (15 * 10) / 100;
		totalPagar = 15 - descuento;
		cout << "El tipo de la entrada es " << tipoEntrada << " y el costo es de " << totalPagar;
	}

	if (edad >= 46 && edad <= 65)
	{
		tipoEntrada = "Entrada 4";
		descuento = (15 * 22) / 100;
		totalPagar = 15 - descuento;
		cout << "El tipo de la entrada es " << tipoEntrada << " y el costo es de " << totalPagar;
	}

	if (edad >66)
	{
		tipoEntrada = "Entrada 5";
		descuento = (15 * 50) / 100;
		totalPagar = 15 - descuento;
		cout << "El tipo de la entrada es " << tipoEntrada << " y el costo es de " << totalPagar;
	}

	system("pause");
	return 0;

}

