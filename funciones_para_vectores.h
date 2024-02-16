#ifndef FUNCIONES_PARA_VECTORES_H_INCLUDED
#define FUNCIONES_PARA_VECTORES_H_INCLUDED



/// **************************************************************************  DE CARGA   **************************************************************************



/// CARGA UN VECTOR DE TAMANIO TAM

void cargar_vector(int vec[], int tam){
int i;

for (i = 0; i < tam; i++)
{
    cout << "INGRESE EL VALOR DEL VECTOR: ";
    cin >> vec[i];
}

return;

}



/// **********************************************************************  DEVUELVEN VALORES   **********************************************************************



/// DEVUELVE EL VALOR MAXIMO DE UN VACTOR TAMANIO TAM

int valor_maximo_vector(int vec[], int tam){

int i, indice_maximo, valor_maximo;
bool flag=false;

for (i = 0; i < tam; i++)
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

/// DEVUELVE EL VALOR MINIMO DE UN VECTOR TAMANIO TAM

int valor_minimo_vector(int vec[], int tam){
int i, menor_indice, menor_valor;
bool flag=false;

for (i = 0; i<tam; i++)
{
    if(flag==false)
    {
        menor_indice=i;
        menor_valor=vec[i];
        flag=true;
    }

    else
    {
        if(menor_valor > vec[i])
        {
            menor_indice=i;
            menor_valor=vec[i];
        }
    }
}

return menor_valor;

}

/// **********************************************************************  DEVUELVEN INDICES   **********************************************************************

/// DEVUELVE EL INDICE DEL ELEMENTO CON MAYOR VALOR

int indice_maximo_vector(int vec[], int tam){

int i, indice_maximo, valor_maximo;
bool flag=false;

for (i = 0; i < tam; i++)
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

return indice_maximo;

}



/// DEVUELVE EL INDICE DEL ELEMENTO CON MENOR VALOR

int indice_minimo_vector(int vec[], int tam){
int i, menor_indice, menor_valor;
bool flag=false;

for (i = 0; i<tam; i++)
{
    if(flag==false)
    {
        menor_indice=i;
        menor_valor=vec[i];
        flag=true;
    }

    else
    {
        if(menor_valor > vec[i])
        {
            menor_indice=i;
            menor_valor=vec[i];
        }
    }
}

return menor_indice;

}

/// DEVUELVE LA POSICION DEL PARAMETRO NUM, SI SE HAYA EN UN VECTOR DE 10

int posicion_num(int vec[], int num ){
int i;

for (i=0; i<10; i++)
{
    if (vec[i] == num)
    {
        return i+1;
    }
}


return -1;
}


/// **********************************************************************  DEVUELVEN BOOLEANOS   **********************************************************************

/// DEVUELVE TRUE SI EL PARAMETRO NUM EXISTE EN UN VECTOR DE 10, DE LO CONTRARIO DEVUELVE FALSE

bool existe_num(int vec[], int num ){
int i;
bool flag=false;

for (i=0; i<10; i++)
{
    if (vec[i] == num)
    {
        flag = true;
    }
}


return flag;
}



#endif // FUNCIONES_PARA_VECTORES_H_INCLUDED
