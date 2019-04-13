// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int sueldomensual,PuntajeS,PuntajeV,PuntajeT,PuntajeC;
	char tipoV, TarjetaC, CargaF;
	bool Prestamo, Sueldo1,sueldo2,sueldo3, Vivienda1,Vivienda2,Vivienda3, Tarjeta, Carga1,carga2;

	cout << "Sueldo mensual:" << endl;
	cin >> sueldomensual;
	cout << "Tipo de vivienda(P: pariente; A: alquilada; M: propia) :" << endl;
	cin >> tipoV;
	cout << "Tarjeta de crédito (N: no tiene; S: si tiene): " << endl;
	cin >> TarjetaC;
	cout << "Tiene carga familiar (N: no tiene; S: si tiene):" << endl;
	cin >> CargaF;

	Sueldo1 = sueldomensual < 1500;
	sueldo2 = sueldomensual >= 1500 && sueldomensual <= 6000;
	sueldo3 = sueldomensual > 6000;

	PuntajeS = 6 * (Sueldo1)+12 * (sueldo2)+18 * (sueldo3);

	Vivienda1 = tipoV == 'P';
	Vivienda2 = tipoV == 'A';
	Vivienda3 = tipoV == 'M';

	PuntajeV = 2 * (Vivienda1)+5 * (Vivienda2)+10 * (Vivienda3);

	Tarjeta = TarjetaC == 'S';
	
	Carga1= CargaF == 'S';
	carga2 = CargaF == 'N';

	PuntajeC = 6 * (Carga1)+3 * (carga2);

	PuntajeT = PuntajeS + PuntajeV + 6*(Tarjeta) + PuntajeC;
	Prestamo = PuntajeT > 20;

	cout << "Puntaje:" << PuntajeT<<endl;
	cout << "Se le otorga el prestamo (0: No; 1: Si):" << Prestamo<<endl;

	system ("pause");
    return 0;
}

