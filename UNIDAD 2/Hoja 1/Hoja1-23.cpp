
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int horas;
	int horasextra, pagoxN;
	float TotalP;
	
	cout << "Ingrese el total de horas trabajadas por el obrero:"<<endl; 
	cin >> horas;

	if (horas<=40)
	{
		pagoxN=horas * 16;
		horasextra = 0;
	}
	else
	{
		pagoxN = 40 * 16;
		horasextra = horas - 40;
		
	}

	TotalP = pagoxN + horasextra * 20;

	cout << "El salario semanal del obrero es de " << TotalP << endl;

	system("pause");
	return 0;
}


