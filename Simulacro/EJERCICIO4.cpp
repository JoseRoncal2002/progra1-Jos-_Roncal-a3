#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string cadena;
	string numero, codigoFr, codigoL1, codigoL2, dia, mes, anio;
	bool Fragilidad1,Fragilidad2, vencimiento1, vencimiento2;
	char LugarP1, lugarP2,X,Y,Q,P;

	cout << "Ingresar codigo:" << endl;
	cin >> cadena;

	numero = cadena.substr(0, 3);
	codigoFr = cadena.substr(3, 1);
	codigoL1 = cadena.substr(4, 2);
	codigoL2 = cadena.substr(6, 2);
	dia = cadena.substr(8, 2);
	mes = cadena.substr(10, 2);
	anio = cadena.substr(12, 4);

	Fragilidad1 = (int(stoi(codigoFr)) == 0);
	Fragilidad2 = (int(stoi(codigoFr)) != 0);
	LugarP1 = char(stoi(codigoL1));
	lugarP2 = char(stoi(codigoL2));
	vencimiento1 = (int(stoi(dia)) <= 9 && int(stoi(mes)) == 04 && int(stoi(anio)) == 2019) || (int(stoi(mes)) < 04 && int(stoi(anio)) == 2019) || (int(stoi(anio)) < 2019);
	vencimiento2 = (int(stoi(dia)) >= 9 && int(stoi(mes)) == 04 && int(stoi(anio)) == 2019) || (int(stoi(mes)) > 04 && int(stoi(anio)) == 2019) || (int(stoi(anio)) > 2019);
	
	X = 'S'*vencimiento1;
	Y = 'N'*vencimiento2;
	Q = 'S'*Fragilidad1;
	P = 'N'*Fragilidad2;

	cout << "Numero unico:..." << numero << endl;
	cout << "Fragil:..." << Q<<P << endl;
	cout << "Pais de procedencia:..." << LugarP1 << lugarP2 << endl;
	cout << "Dia,mes y anio de vencimiento:..." << dia << "-" << mes << "-" << anio << endl;
	cout << "Se encuentra vencido(N:No;S:Si):" << X<<Y << endl;

	system("pause");
	return 0;
}
