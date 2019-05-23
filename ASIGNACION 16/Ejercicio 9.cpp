#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

bool FechaEsValida(int dia, int mes, int anio) {

	bool i = 1;

	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 ||mes==9 || mes==12 )
	{
		if (dia>31)
		{
			i = 0;
		}
		else
		{
			i = 1;
		}
	}
	if (mes == 4 || mes == 6 || mes == 10 || mes == 11)
	{
		if (dia > 30)
		{
			i = 0;
		}
		else
		{
			i = 1;
		}
	}
	if (mes==2)
	{
		if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 4 == 0 && anio % 400 == 0))
		{
			if (dia>29)
			{
				i = 0;
			}
			else
			{
				i = 1;
			}
		}
		else
		{
			if (dia > 28)
			{
				i = 0;
			}
			else
			{
				i = 1;
			}
		}
	}

	return i;

}

int main()
{
	int dia,mes,anio;

	cout << "Ingrese Fecha ";
	cin >> dia;
	cin >> mes;
	cin >> anio;
	cout << endl;

	if (FechaEsValida(dia, mes, anio)==1)
	{
		cout << "La fecha es correcta "<<endl;
	}
	else
	{
		cout << "La fecha no es correcta " << endl;
	}
	
	_getch();
}
