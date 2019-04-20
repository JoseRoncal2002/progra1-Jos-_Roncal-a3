// ConsoleApplication40.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int consumo,adicional;
	float total;

	cout << "Ingrese consumo en GB:"<<endl; 
	cin >> consumo;

	if (consumo<=4)
	{
		total = 50;

		
	}
	
	if (consumo>4 && consumo<8)
		{
			total = 85;

			
		}
if (consumo>8)
			{
				adicional = (consumo - 8)*4.50;
				total = (85 + adicional);
			}
	cout << "consumo total:" << total<<endl;

	system("pause");
	return 0;

}


