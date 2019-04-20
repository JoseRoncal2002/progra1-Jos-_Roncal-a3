

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int diaNacimiento, mesNacimiento, anioNacimiento;
	bool anioPar, diaPar;
	string color;

	cout << "Ingresa el dia de nacimiento : " << endl;
	cin >> diaNacimiento;
	cout << "Ingresa el mes de nacimiento : " << endl;
	cin >> mesNacimiento;
	cout << "Ingresa el anio de nacimiento :" << endl;
	cin >> anioNacimiento;

	anioPar = (anioNacimiento % 2) == 0;
	diaPar = (diaNacimiento % 2) == 0;

	if (mesNacimiento == 1 || mesNacimiento == 2 || mesNacimiento == 3) {
		if (anioPar) {
			if (diaPar) {
				color = "Rojo";
			}
			else {
				color = "Celeste";
			}
		}
		else {
			if (diaPar) {
				color = "Morado";
			}
			else {
				color = "Negro";
			}
		}
	}
	if (mesNacimiento == 4 || mesNacimiento == 5 || mesNacimiento == 6) {
		if (anioPar) {
			if (diaPar) {
				color = "Naranja";
			}
			else {
				color = "Verde";
			}
		}
		else {
			if (diaPar) {
				color = "Turquesa";
			}
			else {
				color = "Gris";
			}
		}
	}
	if (mesNacimiento == 7 || mesNacimiento == 8 || mesNacimiento == 9) {
		if (anioPar) {
			if (diaPar) {
				color = "Marron";
			}
			else {
				color = "Fucsia";
			}
		}
		else {
			if (diaPar) {
				color = "Azul";
			}
			else {
				color = "Amarillo";
			}
		}
	}
	if (mesNacimiento == 10 || mesNacimiento == 11 || mesNacimiento == 12) {
		if (anioPar) {
			if (diaPar) {
				color = "Violeta";
			}
			else {
				color = "Rosado";
			}
		}
		else {
			if (diaPar) {
				color = "Olivo";
			}
			else {
				color = "Blanco";
			}
		}
	}

	cout << "Tu color es " << color << endl;

	system("pause");
	return 0;

}


