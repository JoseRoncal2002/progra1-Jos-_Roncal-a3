

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int diametro, ingredientesExtra;
	float totalPagar;

    cout << "Ingrese el diametro en centimetros:"<<endl; 
	cin >> diametro;
	cout << "Ingrese el numero de ingredientes extras:" << endl;
	cin >> ingredientesExtra;

	totalPagar = diametro * 1.5 + ingredientesExtra * 2.5;

	cout << "El precio total de la pizza es de:" << totalPagar;

	system("pause");
	return 0;
}


