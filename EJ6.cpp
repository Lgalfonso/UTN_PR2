#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
#include "funciones_para_vectores.h"
/*Hacer una función que reciba como parámetros un vector de enteros de 10
elementos y un número entero, y que devuelva la posición si el número recibido
existe en el vector, o -1 si no existe*/
int main() {
int vec_ejemplo[10], pos, val;

cargar_vector(vec_ejemplo, 10);
cout << endl << "INGRESAR EL NUMERO QUE SE DESEA BUSCAR EN EL VECTOR: ";
cin >> val;

pos = posicion_num(vec_ejemplo, val);

if (pos != -1)
{
    cout << endl << "EL NUMERO " << val << " SE ENCUENTRA EN: " << pos;
}
else
{
    cout << endl << "NO SE HA ENCONTRADO " << val << " EN EL VECTOR." ;
}
return 0;
}
