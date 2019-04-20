

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char modelo;
	int ultimoDigitoPlaca;
	float costoMantAnual;
	string mesRevision;

	cout << "Ingresa el modelo : " << endl;
	cin >> modelo;
	cout << "Ingresa el ultimo digito de la placa : " << endl;
	cin >> ultimoDigitoPlaca;
	cout << "Ingresa el costo de mantenimiento anual :" << endl;
	cin >> costoMantAnual;

	switch (modelo) {
	case 'A':
		if (ultimoDigitoPlaca >= 0 && ultimoDigitoPlaca <= 5) {
			if (costoMantAnual <= 500) {
				mesRevision = "Enero";
			} else {
				mesRevision = "Febrero";
			}
		}
		if (ultimoDigitoPlaca >= 6 && ultimoDigitoPlaca <= 8) {
			if (costoMantAnual <= 700) {
				mesRevision = "Junio";
			}
			else {
				mesRevision = "Julio";
			}
		}
		if (ultimoDigitoPlaca == 9) {
			if (costoMantAnual <= 1000) {
				mesRevision = "Octubre";
			}
			else {
				mesRevision = "Noviembre";
			}
		}
		break;
	case 'B':
		if (ultimoDigitoPlaca >= 1 && ultimoDigitoPlaca <= 3) {
			if (costoMantAnual <= 500) {
				mesRevision = "Marzo";
			}
			else {
				mesRevision = "Abril";
			}
		}
		if (ultimoDigitoPlaca >= 4 && ultimoDigitoPlaca <= 8) {
			if (costoMantAnual <= 700) {
				mesRevision = "Mayo";
			}
			else {
				mesRevision = "Setiembre";
			}
		}
		if (ultimoDigitoPlaca == 9 || ultimoDigitoPlaca == 0) {
			if (costoMantAnual <= 1000) {
				mesRevision = "Agosto";
			}
			else {
				mesRevision = "Diciembre";
			}
		}
		break;
	}

	cout << "El mes de revision tecnica es " << mesRevision << endl;

	system("pause");
	return 0;

}


