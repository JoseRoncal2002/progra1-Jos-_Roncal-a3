#include "pch.h"
#include <iostream>
#include "ConsoleApplication3.h"
using namespace std;


int main()
{
	int horaEntrada = 0;
	int horaSalida = 0;
	int montoPagar = 0;
	int numeroHoras = 0;
	cout << "Ingrese Hora de Entrada:\n";
	cin >> horaEntrada;
	cout << "Ingrese Hora de Salida:\n";
	cin >> horaSalida;
	numeroHoras = ((horaSalida - horaEntrada) - 1);
	montoPagar = 10 + (6 * numeroHoras);
	cout << "Monto a pagar:" << montoPagar << endl;
	system("pause");
	return 0;
}

