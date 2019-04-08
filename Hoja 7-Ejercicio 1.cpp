#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int peso, altura, IMC;
	cout << "Ingrese peso" << endl;
	cin >> peso;
	cout << "Ingrese altura" << endl;
	cin >> altura;
	IMC = peso / (altura*altura);

	cout << "Su diagnostico es:" << endl;
	if (IMC < 15)
	{
		cout << "criterio de ingreso en hospital" << endl;
	}
	if (IMC >= 15 && IMC < 20)
	{
		cout << "bajo peso" << endl;
	}
	if (IMC >= 20 && IMC < 30)
	{
		cout << "peso normal (saludable)" << endl;
	}
	if (IMC >= 30 && IMC <= 40)
	{
		cout << "sobrepeso (obesidad de grado I)" << endl;
	}
	if (IMC > 40)
	{
		cout << "sobrepeso cronico (obesidad de grado II)" << endl;
	}

	system("pause");
	return 0;
}
