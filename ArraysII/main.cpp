#include <iostream>

using namespace std;

int main()
{
    /*Ejemplo 1:Realice un programa en el cual pida n cantidad de notas
    para un estudiante, obtenga el promedio y muestre en pantalla si el
    estudiante aprobo(promedio>=61) o reprobo*/
    /*int cantidad=0;
    double promedio=0,suma=0;
    cout<<"Diogite la cantidad de notas a promediar:";cin>>cantidad;
    double notas[cantidad];
    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese la nota "<<(i+1)<<" :";cin>>notas[i];
        suma+=notas[i];
    }
    promedio=suma/cantidad;
    if(promedio>=61){
        cout<<"El promedio es: "<<promedio<<" Aprobo :D"<<endl;
    }else{
    cout<<"El promedio es: "<<promedio<<" Reprobo :C"<<endl;
    }*/

    /*Ejemplo 2: Realice un programa en el cual se tengan 2 arreglos
    de tipo entero, el usuario debe llenar los datos de cada arreglo
    ,son 5 datos por arreglo, luego de llenarlos el usuario debera poder
    observar la suma de ambos arreglos es decir
    si el usuario ingreso como primer numero del primer arreglo 1
    y como primer numero del arreglo 2
    se debera mostrar el primer numero del arreglo de la suma que este caso seria
    3*/
    /*int array1[5];
    int array2[5];
    int arraySuma[5];
    for(int i=0;i<5;i++){
        cout<<"Ingrese el numero "<<(i+1)<<" Del array 1:";cin>>array1[i];
    }
    for(int i=0;i<5;i++){
        cout<<"Ingrese el numero "<<(i+1)<<" Del array 2:";cin>>array2[i];
    }
    cout<<"Array 1       Array 2     suma"<<endl;
    for(int i=0;i<5;i++){
            arraySuma[i]=array1[i]+array2[i];
        cout<<array1[i]<<"   +   "<<array2[i]<<"   =    "<<arraySuma[i]<<endl;
    }*/

    /*Hacer un programa en C++ que llene un array de 100 enteros de la siguiente manera:

1) 50 números pares.
2) 50 números impares.

Luego, mostrarlos por pantalla.*/
/*int numeros[100];
int contadorPares=0;
int contadorImpares=50;
for(int i=0;i<100;i++){
    if(i%2==0){
        numeros[contadorPares]=i;
        contadorPares++;
    }
    else{
        numeros[contadorImpares]=i;
        contadorImpares++;
    }
}
cout<<"Numeros Pares:"<<endl;
for(int i=0;i<50;i++){
    cout<<numeros[i]<<endl;
}
cout<<"Numeros Impares:"<<endl;
for(int i=50;i<100;i++){
    cout<<numeros[i]<<endl;
}*/

/*
Escribir un programa en C++ que llene un array con todos los números divisibles entre
3 del 0 al 99. Luego mostrar los elementos por pantalla.
*/
/*int contador=0;
for(int i=0;i<100;i++){
        if(i%3==0){
    contador++;
        }
}
int numeros[contador];
int contadorPosiciones=0;
for(int i=0;i<100;i++){
        if(i%3==0){
    numeros[contadorPosiciones]=i;
    contadorPosiciones++;
        }
}
for(int i=0;i<contador;i++){
    cout<<numeros[i]<<endl;
}*/


    return 0;
}
