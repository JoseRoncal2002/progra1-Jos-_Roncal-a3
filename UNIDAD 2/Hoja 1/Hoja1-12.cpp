// restricciones: numero de faltas debe ser mayor o igual a 0
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float nota;
	int faltas;

	cout << "ingrese su nota:" << endl;
	cin >> nota;
	cout << "Ingrese cantidad de faltas:" << endl;
	cin >> faltas;

	if (nota>=15 && faltas==0)
	{
		cout << "Se le otorga la beca" << endl;

	
	}
else
	{
		cout << "No se le otorga la beca" << endl;
	}
	
	system("pause");
	return 0;
}

