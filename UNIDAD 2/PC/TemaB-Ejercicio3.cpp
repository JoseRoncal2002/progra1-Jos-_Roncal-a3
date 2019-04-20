
#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char vista, dia;
	int camas;
	bool Mar, Interior, lunes, viernes, domingo;
	bool camas1, camas2, camas3;
	float precio1, incremento, precioF;

	cout << "Ingrese la vista (M: Mar, I: Interior):" << endl;
	cin >> vista;
	cout << "Dia de ingreso (L: lunes-jueves; V: viernes o sábado; D: domingo):" << endl;
	cin >> dia;
	cout << "Camas:" << endl;
	cin >> camas;

	Mar = vista == 'M';
	Interior = vista == 'I';

	lunes = dia == 'L';
	viernes = dia == 'V';
	domingo = dia == 'D';

	precio1 = ((20.4)*lunes + (80.8)*viernes + (70.1)*domingo)*Mar + ((15.7)*lunes + (60.7)*viernes + (65.8)*domingo)*Interior;

	camas1 = camas != 1;
	camas2 = camas >= 2 && camas <= 3;
	camas3 = camas > 3;

	incremento = ((precio1 * 12) / 100)*camas2 + ((precio1 * 25) / 100)*camas3;

	precioF = precio1 + (incremento)*camas1;

	cout << "Precio del ticket:" << precioF << endl;

	system("pause");
	return 0;
}
