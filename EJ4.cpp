#include <iostream>
#include <cstdlib>
#include <cstring>
/*Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
la posición que ocupa el valor máximo contenido en ese vector.*/
using namespace std;
#include "funciones_para_vectores.h"

int main() {

int vec_mio[5], val;

cargar_vector(vec_mio, 5);
val = indice_maximo_vector(vec_mio, 5);

cout << endl << "EL INDICE DEL VALOR MAXIMO DENTRO DEL VECTOR ES: " << val+1;


return 0;
}
