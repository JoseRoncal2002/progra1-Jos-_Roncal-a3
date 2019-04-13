
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string cadena;
	string DiaV, MesV, anioV, Codigo, Entero;
	char Producto;
	bool Perecible;

	cout << "Ingrese Codigo:" << endl;
	cin >> cadena;

	DiaV = (cadena.substr(0, 2));
	MesV = (cadena.substr(2, 2));
	anioV = (cadena.substr(4, 4));
	Codigo = (cadena.substr(8, 2));
	Entero = (cadena.substr(10, 2));

	Producto = char(stoi(Codigo));

	Perecible = (int(stoi(Entero)) == '00');

	cout << "Dia de vencimiento:" << DiaV<<endl;
	cout << "Mes de vencimiento:" << MesV << endl;
	cout << "Anio de vencimiento:" << anioV << endl;
	cout << "El tipo de producto es:" << Producto << endl;
	cout << "Producto perecible (0: No; 1: Si):" << Perecible << endl;

	system("pause");
	return 0;
}

