#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int cadena;

	cout << "Ingrese un numero de hasta 3 cifras" << endl;
	cin >> cadena;


	if (cadena < 1 || cadena > 100)
	{
		cout << "Error" << endl;
	}
	else
	{
		if (cadena>=1 && cadena<=9)
		{
			cout << "El numero tiene 1 digito" << endl;
				
		}
		
		if (cadena >= 10 && cadena <= 99)
		{
			cout << "El numero tiene 2 digitos" << endl;

		}
		
		if (cadena >= 100 && cadena <= 999)
		{
			cout << "El numero tiene 3 digitos" << endl;

		}
	}

	system("pause");
	return 0;
}
