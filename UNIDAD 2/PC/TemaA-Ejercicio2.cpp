

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string cadena;
	string dia, mes, anio, ciudad, tamanio;
	bool lima, grande,cantidadA;
	int anioC,anio1,mes1,dia1;

	cout << "Ingrese codigo unico de contribuyente: " << endl;
	cin >> cadena;

	anio = cadena.substr(0, 4);
	mes = cadena.substr(4, 2);
	dia = cadena.substr(6, 2);
	ciudad = cadena.substr(8, 3);
	tamanio = cadena.substr(11, 1);

	lima = (ciudad == "LIM");
	grande = (tamanio == "G");

	anio1 = int(stoi(anio));
	mes1 = int(stoi(mes));
	dia1 = int(stoi(dia));
	
	cantidadA = (anio1 == 2018 && mes1 == 04 && dia1 < 19) || (anio1 == 2018 && mes1 < 04) || (anio1 < 2018);
	anioC = (2019 - anio1)*cantidadA;
	
	cout << "Dia de alta: " << dia << endl;
	cout << "Mes de alta: " << mes << endl;
	cout << "Anio de alta: " << anio << endl;
	cout << "Empresa de Lima(0: No; 1: Si): " << lima << endl;
	cout << "Empresa grande(0: No; 1: Si): " << grande << endl;
	cout << "Anios operando: " << anioC << endl;

	system("pause");
	return 0;
}


