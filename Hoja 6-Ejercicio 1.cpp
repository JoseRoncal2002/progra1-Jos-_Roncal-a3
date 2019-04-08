#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Litros,cuota;
	bool opcion1,opcion2,opcion3;
	cout << "Ingrese cantidad de Litros:" << endl;
	cin >> Litros;
	opcion1 = (Litros <= 50);
	opcion2 = (Litros > 50 && Litros <= 200);
	opcion3 = (Litros > 200);
	cuota = 20 + ((Litros * 0)*opcion1) + (((Litros-50) * 2)*opcion2) + ((((Litros-200) * 3)+ (((Litros - 50)-(Litros-200)) * 2))*opcion3);
	cout << "Cuota=" << cuota << endl;
	
	system("pause");
	return 0;
}

