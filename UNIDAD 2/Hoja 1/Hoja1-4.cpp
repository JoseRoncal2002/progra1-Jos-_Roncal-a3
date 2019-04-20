// Restricciones: Edad>0.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int edad,precio;

	cout << "Ingrese edad:" << endl;
	cin >> edad;

	if (edad < 18)
	{
		precio = 7;
	}
	if (edad >= 18 && edad<=50 )
	{
		precio = 15;
	}
	if (edad > 50)
	{
		precio = 5;
	}

	cout << "Precio a pagar: "<<precio << endl;

	system("pause");
	return 0;

}

