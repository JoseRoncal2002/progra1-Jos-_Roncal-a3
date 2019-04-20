#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int consumo, comsumoMayor100;
	int zona;
	bool tiene100DeConsumo;
	float totalP,montofijo;

	cout << "Ingrese zona (1 – 2): " << endl;
	cin >> zona;
	cout << "Ingrese consumo: " << endl;
	cin >> consumo;

	
	
	if (zona==1)
	{
		montofijo = 50;

		tiene100DeConsumo = consumo - 100 >= 0;

		comsumoMayor100 = 0;

		if (consumo > 100)	{
			comsumoMayor100 = consumo - 100;
		}

		totalP = montofijo + tiene100DeConsumo * 0.75 + comsumoMayor100 * 0.9;
	}

	if (zona == 2)
	{
		montofijo = 25;

		tiene100DeConsumo = consumo - 100 >= 0;

		comsumoMayor100 = 0;

		if (consumo > 100) {
			comsumoMayor100 = consumo - 100;
		}

		totalP = montofijo + tiene100DeConsumo * 0.3 + comsumoMayor100 * 0.7;
	}
		
	cout << "Total a pagar es: " << totalP<<endl;
	
	system("pause");
	return 0;
}
