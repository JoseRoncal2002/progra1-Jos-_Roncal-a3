// ConsoleApplication55.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char aerolinea, dia;
	int maletas;
	bool latam, viva, lunes, viernes, sabado;
	bool maletas0,maletas1, maletas2;
	float precio1,incremento,precioF;
	
	cout << "Ingrese la Aerolínea (L: LATAM, V: Viva):"<<endl; 
	cin >> aerolinea;
	cout << "Día (L: lunes; V: viernes; S: sábado):" << endl;
	cin >> dia;
	cout << "Maletas:" << endl;
	cin >> maletas;

	latam = aerolinea == 'L';
	viva = aerolinea == 'V';

	lunes = dia == 'L';
	viernes = dia == 'V';
	sabado = dia == 'S';

	precio1 = ((70.4)*lunes + (100.8)*viernes + (90.1)*sabado)*latam + ((20.4)*lunes + (70.6)*viernes + (80.3)*sabado)*viva;

	maletas0 = maletas != 0;
	maletas1 = maletas >= 1 && maletas <= 2;
	maletas2 = maletas > 2;

	incremento = ((precio1 * 15) / 100)*maletas1 + ((precio1 * 30) / 100)*maletas2;

	precioF = precio1 + (incremento)*maletas0;

	cout << "Precio del ticket:" << precioF<<endl;

	system("pause");
	return 0;
}


