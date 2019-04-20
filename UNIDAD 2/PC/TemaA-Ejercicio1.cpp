// ConsoleApplication53.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

float precioterreno(float tamanio, float precio, float tipoC)
{
	float resultado;

	resultado = (tamanio*precio) * tipoC;

	return resultado;
}

int main()
{
	float tamanio, precio, tipoC,precioT;
	
	cout << "Ingrese el tamanio del terreno en metros cuadrados:" << endl;
	cin >> tamanio;
	cout << "Ingrese el precio por metro cuadrado en dolares:" << endl;
	cin >> precio;
	cout << "Ingrese el tipo de cambio del dia:" << endl;
	cin >> tipoC;

	precioT = precioterreno(tamanio, precio, tipoC);

	cout << "El precio total de venta en soles del terreno es:" << precioT << endl;

	system("pause");
	return 0;
}