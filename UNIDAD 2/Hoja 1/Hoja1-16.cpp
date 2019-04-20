

#include "pch.h"
#include <iostream>
#include <conio.h>
#include<string>

using namespace std;

int main()
{
	int codigo;
	float nota1, nota2, nota3,Promedio;
	//string codigo1,codigo2;
	//int codigo1;
	char carita;

    cout << "Ingrese el codigo del alumno:"<<endl; 
	cin >> codigo;
	cout << "Ingrese las tres notas del alumno "<<codigo<<":"<< endl;
	cin >> nota1>>nota2>>nota3;

	Promedio = (30*nota1)/100 + (30*nota2)/100 + (40*nota3)/100;

	cout << "El promedio del alumno " << codigo << " es de " << Promedio<<endl;

	if (Promedio<13)
	{
		cout << "estudie" << endl;
	}

	if (Promedio >= 13 && Promedio<15)
	{
		
		carita = char(184);
	
		cout << "Felicitaciones "<< carita << endl;
	}

	if (Promedio >= 15 && Promedio < 20)
	{
		
		carita = char(184);

		cout << "Felicitaciones " << carita<<carita << endl;
	}

	if (Promedio == 20)
	{
		carita = char(184);

		cout << "Felicitaciones " << carita << carita<<carita<<carita<<carita << endl;
	}

	system("pause");
	return 0;

}

