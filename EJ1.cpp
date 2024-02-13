#include <iostream>
#include <cstdlib>
#include <cstring>
/*Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
el valor mínimo contenido en ese vector.*/
using namespace std;

int Cantidad_vector(int vec[], int num){
int i, contador=0, minimo_indice, minimo_valor;
bool flag=false;

for (i = 0; i<num; i++)
{
    if(flag==false)
    {
        minimo_indice=i;
        minimo_valor=vec[i];
        flag=true;
    }

    else
    {
        if(minimo_valor > vec[i])
        {
            minimo_indice=i;
            minimo_valor=vec[i];
        }
    }
}

return minimo_valor;

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
int vec_mio[10], x;

cargar_vector(vec_mio, 10);
x = Cantidad_vector(vec_mio, 10);

cout << endl << "EL VALOR MINIMO DEL VECTOR ES: " << x;


return 0;
}
