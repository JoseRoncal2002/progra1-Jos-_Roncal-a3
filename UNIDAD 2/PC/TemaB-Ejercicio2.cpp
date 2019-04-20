

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int ventas;
	float sueldo1,incremento,sueldoT;
	char tienda;
	bool ventas1, ventas2, ventas3;
	bool miraflores, surco, lurin, ancon;

	cout << "Ingrese las ventas del colaborador: " << endl;
	cin >> ventas;
	cout << "Ingrese el codigo de la tienda: " << endl;
	cin >> tienda;

	ventas1 = ventas >= 1 && ventas <= 5;
	ventas2 = ventas > 5 && ventas <= 10;
	ventas3 = ventas >10;
	
	sueldo1 = 900 + (900 * 10 / 100)*ventas1 + (900 * 15 / 100)*ventas2 + (900 * 25 / 100)*ventas3;

	miraflores = tienda == 'M';
	surco = tienda == 'S';
	lurin = tienda == 'L';
	ancon = tienda == 'A';

	incremento = (sueldo1 * 2 / 100)*miraflores + (sueldo1 * 5 / 100)*surco + (sueldo1 * 10 / 100)*lurin + (sueldo1 * 15 / 100)*ancon;
	
	sueldoT = sueldo1 + incremento;

	cout << "El sueldo correspondiente es: " << sueldoT << endl;

	system("pause");
	return 0;
}


