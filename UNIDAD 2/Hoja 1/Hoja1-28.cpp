

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char escalaPago;
	int numeroCursos;
	float cuotaFija, cuotaVariable,importeCancelar;

   cout << "Ingresa la escala de pago: "<<endl; 
   cin >> escalaPago;
   cout << "Ingresa el numero de cursos:" << endl;
   cin >> numeroCursos;

   cuotaFija = 350;

	switch (escalaPago)    {
		case 'A' :	
			if (numeroCursos >= 1 && numeroCursos <= 5) {
				cuotaVariable = 400;
			}
			if (numeroCursos >= 6 && numeroCursos <= 8) {
				cuotaVariable = 600;
			}
			if (numeroCursos > 8) {
				cuotaVariable = 900;
			}
			break;
		case 'B' : 
			if (numeroCursos >= 1 && numeroCursos <= 3) {
				cuotaVariable = 350;
			}
			if (numeroCursos >= 4 && numeroCursos <= 7) {
				cuotaVariable = 500;
			}
			if (numeroCursos >7) {
				cuotaVariable = 700;
			}
			break;
		case 'C' : 
			if (numeroCursos >= 1 && numeroCursos <= 3) {
				cuotaVariable = 320;
			}
			if (numeroCursos >= 4 && numeroCursos <= 7) {
				cuotaVariable = 480;
			}
			if (numeroCursos >7) {
				cuotaVariable = 685;
			}
			break;
		case 'D' : 
			if (numeroCursos >= 1 && numeroCursos <= 4) {
				cuotaVariable = 310;
			}
			if (numeroCursos >= 5 && numeroCursos <= 8) {
				cuotaVariable = 475;
			}
			if (numeroCursos >8) {
				cuotaVariable = 680;
			}
			break;
	}

	importeCancelar = cuotaFija + cuotaVariable;

	cout << "El importe a cancelar es de " << importeCancelar << endl;

	system("pause");
	return 0;

}


