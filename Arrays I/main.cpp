#include <iostream>

using namespace std;
//Arrays,Vectores,Arreglo
/*
Que es un Vector,Array o Arreglo?
Un vector o array es un tipo de dato que almacena una secuencia de datos del mismo
tipo.Los elementos de un array se almacenan en zonas contiguas de memoria
y se puede acceder a ellos de manera directa mediante un INDICE o POSICION.
Existen diversos tipos:
-Unidimensionales{Una dimension[Filas]}
-Bidimensionales(Matices){Dos Dimensiones[filas y columnas]}
-Tridimensionales{Tres dimensiones[filas de matrices]}
-Cuatro dimensiones{Cuatro dimensiones[matices de matrices]}
....

Maneras de definir un array unidimensional:

sintaxys:
tipo nombre[tamanio];

ejemplos:
*/
int main()
{
/*int numeros[10];
char letras[5];
float reales[15];*/
//inicializacion de un array
//Con datos ya predefinidos
//int numeros[]={1,4,6,7,3};
//cout<<numeros[0]<<endl;
//char letra[]={'a','e','i','o','u'};
/*Ejemplo 1: Escribir un programa que defina un vector de numeros y calcule
la suma de sus elementos*/
int numero[]={1,2,3,4,5};
int suma=0;
for(int i=0;i<5;i++){
cout<<numero[i]<<endl;
suma+=numero[i];
}
cout<<"La suma es:"<<suma<<endl;
    return 0;
}
