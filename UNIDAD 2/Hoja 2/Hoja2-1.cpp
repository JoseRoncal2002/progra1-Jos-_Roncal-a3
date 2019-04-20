// opcion>0 && opcion<5
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int opcion;
	float base, altura, radio, lado;
	float resultado;

	cout << "Que opcion desea" << endl;
	cin >> opcion;

	if (opcion == 1)
	{
		cout << "Ingrese base y altura del triangulo" << endl;
		cin >> base >> altura;

		resultado = (base*altura) / 2;

	}

	if (opcion == 2)
	{
		cout << "Ingrese base y altura del rectangulo" << endl;
		cin >> base >> altura;

		resultado = base * altura;

	}

	if (opcion == 3)
	{
		cout << "Ingrese el radio del circulo" << endl;
		cin >> radio;

		resultado = 3.14*(radio*radio);

	}

	if (opcion == 4)
	{
		cout << "Ingrese lado del cuadrado" << endl;
		cin >> lado;

		resultado = lado * lado;

	}

	if (opcion == 5)
	{
		exit(0);
	}

	cout << "resultado:" << resultado<<endl;

	system("pause");
	return 0;


}
