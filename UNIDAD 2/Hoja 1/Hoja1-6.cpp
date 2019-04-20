// Restricciones: valor>0.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int A, B, C, Valor;
	float raiz1, raiz2,n;
	float resultado;

   cout << "Ingrese el valor de A:"<<endl;
   cin >> A;
   cout << "Ingrese el valor de B:"<<endl;
   cin >> B;
   cout << "Ingrese el valor de C:"<<endl;
   cin >> C;
   cout << "Ingrese un valor para evaluar:"<<endl;
   cin >> Valor;

   n = sqrt((B * B) - 4 * (A*C));
   raiz1 = ((-1 * B) + (n)) / (2 * A);
   raiz2 = ((-1 * B) - (n)) / (2 * A);

   resultado = A * (Valor*Valor) + B * (Valor)+C;

   cout << "Raiz 1:" << raiz1<<endl;
   cout << "Raiz 2:" << raiz2<<endl;
   cout << "resultado:" << resultado << endl;

   system("pause");
   return 0;
}


