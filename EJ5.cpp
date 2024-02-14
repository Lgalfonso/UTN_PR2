#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
#include "funciones_para_vectores.h"
/*Hacer una función que reciba como parámetros un vector de enteros de 10
elementos y un número entero, y que devuelva verdadero si el número recibido
existe en el vector, o falso si no existe.*/
int main() {
int vec_ejemplo[10], val;
bool flag;

cargar_vector(vec_ejemplo, 10);
cout << endl << "INDIQUE EL NUMERO QUE DESEA BUSCAR EN EL VECTOR: ";
cin >> val;

flag = existe_num(vec_ejemplo, val);

if (flag == true)
{
    cout << endl << " ***** EL NUMERO " << val << " SE ENCUENTRA EN EL VECTOR *****";
}
else
{
    cout << endl << " ***** NO SE HA ENCONTRADO " << val << " EN EL VECTOR *****";
}

return 0;
}
