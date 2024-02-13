#include <iostream>
#include <cstdlib>
#include <cstring>
/*Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
el valor máximo contenido en ese vector.*/
using namespace std;

int valor_maximo_vector(int vec[], int num){

int i, contador=0, indice_maximo, valor_maximo;
bool flag=false;

for (i = 0; i<num; i++)
{
    if(flag==false)
    {
        indice_maximo=i;
        valor_maximo=vec[i];
        flag=true;
    }

    else
    {
        if(vec[i] > valor_maximo)
        {
        indice_maximo=i;
        valor_maximo=vec[i];
        }
    }
}

return valor_maximo;

}

void cargar_vector(int vec[], int num){
int i;

for (i=0; i<num; i++)
{
    cin >> vec[i];
}


return;

}

int main() {
int vector_mio[10], val_max;

cargar_vector(vector_mio, 10);
val_max=valor_maximo_vector(vector_mio, 10);

cout << endl << "EL VALOR MAXIMO DEL VECTOR ES: " << val_max;


return 0;
}
