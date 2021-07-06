#include <iostream>

using namespace std;

//Ciclos-->Estructura Repetitiva
/*
-for
-foreach
-do while
-while
*/
//Todos los ciclos(Exceptuando el foreach inician desde 0)
//0,1,2,3   =4-> Paso=1
//0,2,4,6,8 =5-> Paso=2

//for
int main()
{
/*
Sintaxis:
for(inicia;donde termina;paso){
    Condicion que se repite el numero de veces indicado
}
*/
/*
i
---
0
1
2
3
4

*/

/*for(int i=0;i<5;++i){
  cout<<i<<endl;
}*/
/*for(int i=5;i>=0;--i){
  cout<<i<<endl;
}*/
/*Ejemplo 1: Realice un programa en donde se listen y muestren los numeros
pares del 0 al 100*/
//Solucion 1
/*for(int i=0;i<=100;i+=2){
    cout<<i<<endl;
}*/
//Solucion 2
/*for(int i=0;i<=100;i++){
        if(i%2==0){
    cout<<i<<endl;
        }
}*/

/*Ejemplo 3: Realizar un programa en el cual se muestre la tabla de multiplicar desde el 0 hasta el numero
que solicite el usuario, la tabla debera ser del numero que solicite tambien el usuario
*/
/*int NumeroTabla=0,NumeroATerminar=0;
cout<<"Digite el numero de la tabla que desea ver: ";cin>>NumeroTabla;
cout<<"Digite el numero hasta donde necesita la tabla: ";cin>>NumeroATerminar;
for(int i=0;i<=NumeroATerminar;i++){
    cout<<NumeroTabla<<"*"<<i<<"="<<(NumeroTabla*i)<<endl;

}*/
/*
Ejemplo 4: Realice un programa para calcular el promedio de 4 notas
de un alumno
*/
//0,1,2,3
double nota,suma=0,promedio;
for(int i=0;i<4;++i){
    cout<<"Ingrese La nota "<<(i+1)<<endl;
    cin>>nota;
    suma+=nota;//suma=suma+nota
}
/*
i       sumaInicio    nota       SumaFinal
------------------------------------------
0           0           10          10
1           10          2           12
2           12          3           15
3           15          5           20

*/
promedio=suma/4;
//20/4=5
cout<<"El promedio es :"<<promedio<<endl;
    return 0;
}
