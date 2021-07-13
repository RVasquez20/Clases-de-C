#include <iostream>
#include<math.h>
using namespace std;

int main()
{
/*
Ejemplo 1:Realizar un programa que muestre la siguiente figura

****
***
**
*

*/
/*
i       j       mensaje
-------------------------
4       0->4         ****
3       0->3         ***
2       0->2         **
1       0->1         *
0        0

*/
/*for(int i=4;i>=0;i--){
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
}*/
/*Ejemplo 2 : Realice un programa en el cual se muestre la siguiente figura

****
****
****



*       *
**     **
***   ***
**** ****

*/
/*for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<"*";
    }
    cout<<endl;
}*/
/*Ejemplo 3:Realice un programa en el cual se muestre la siguiente figura
    *
   ***
  *****
*/
/*int aux=4;
for(int i=0;i<3;i++){
    for(int j=aux;j>=0;--j){
     cout<<" ";
    }
    if(i==0){
        cout<<"*"<<endl;
    }else if(i==1){
     cout<<"***"<<endl;
    }else if(i==2){
     cout<<"*****"<<endl;
    }
    aux--;
}*/
/*
Ejercicio 1:Realice un programa en el cual se muestre la siguiente figura

**********
*        *
*        *
*        *
*        *
*        *
*        *
*        *
*        *
*        *
**********

*/
/*Ejemplo 4: Realizar un programa en el cual se muestren todos los caracteres
del codigo Ascii*/
/*char simbolo;
cout<<"Valor\t\tSimbolo"<<endl;
for(int i=0;i<256;i++){
    simbolo=i;
    cout<<i<<"\t\t"<<simbolo<<endl;
}*/
/*Ejemplo 5: Realizar un programa que muestre el valor de seno de los angulos de 0 a 360*/

cout<<"Grados\t\tSin"<<endl;
cout<<"========================"<<endl;
for(int i=0;i<=360;i++){
    cout<<i<<"º\t\t"<<(sin(i))<<endl;
}

    return 0;
}
