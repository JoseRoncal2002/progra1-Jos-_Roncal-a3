#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int AniosEx,puntaje;
	char Estudios;
	bool opcion1, opcion2;
	bool Primarios, Secundarios, Universitario, Postgrado;
	cout << "Ingrese anios de Experiencia:" << endl;
	cin >> AniosEx;
	cout << "Ingrese nivel de Estudios:" << endl;
	cin >> Estudios;
	opcion1 = (AniosEx < 5);
	opcion2 = (AniosEx >= 5);
	Primarios = (Estudios == 'P');
	Secundarios = (Estudios == 'S');
	Universitario = (Estudios == 'U');
	Postgrado = (Estudios == 'G');
	puntaje = (5 * opcion1) + (10 * opcion2) + (5 * Primarios) + (10 * Secundarios) + (20 * Universitario) + (30 * Postgrado);
	cout<<"Su puntaje es:" << puntaje << endl;
	system("pause");
	return 0;
}
