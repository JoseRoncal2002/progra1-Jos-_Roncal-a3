#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float x, y;

	cout << "Ingrese las coordenadas X e Y de un Punto:" <<endl; 
	cin >> x >> y;

	if (x == 0 && y == 0)
	{
		cout << "Centro de coordenadas"<<endl;

	}
	
	if (x == 0 && y != 0)
	{
		cout << "Eje Y";

	}

	if (x == 0 && y != 0)
	{
		cout << "Eje x"<<endl;

	}

	if (x > 0 && y > 0)
	{
		cout << "Cuadrante I"<<endl;

	}

	if (x <0 && y > 0)
	{
		cout << "Cuadrante II" << endl;

	}

	if (x < 0 && y < 0)
	{
		cout << "Cuadrante III" << endl;

	}

	if (x > 0 && y < 0)
	{
		cout << "Cuadrante IV" << endl;

	}

	system("pause");
	return 0;
}


