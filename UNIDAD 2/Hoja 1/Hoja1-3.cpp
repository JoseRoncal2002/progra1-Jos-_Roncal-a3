// Restricciones: La nota debe estar entre 0 y 20.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float nota;

   cout << "Ingrese nota:"<<endl;
   cin >> nota;

   if (nota<12.5)
   {
	   cout << "Desaprobado" << endl;
   }
   if (nota >= 12.5)
   {
	   cout << "Aprobado" << endl;
   }

   system("pause");
   return 0;

}


