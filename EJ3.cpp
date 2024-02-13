#include <iostream>
#include <cstdlib>
#include <cstring>
/*Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
la posición que cupa el valor mínimo contenido en ese vector.*/
using namespace std;
#include "funciones_para_vectores.h"


int main() {
int vec_mio[5], x;

cargar_vector(vec_mio, 5);

x = indice_minimo_vector(vec_mio, 5);

cout << endl << "EL INDICE DE MENOR VALOR ES: " << x+1;

return 0;
}
