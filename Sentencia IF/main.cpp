#include <iostream>

using namespace std;
/*
Condicionales:
-Sentencia if
-Sentencia if else
-Sentencia Switch
-Sentencias anidadas
*/

/*Operadores logicos:

Variables a utilizar:
x=12;
y=15;
z=15;
A=true;
Operador            Significado         Ejemplo             Resultado
----------------------------------------------------------------------
==                  igualdad            y==z                true
!=                  desigualdad         x!=y                true
&&                  AND(Y)              x&&y                false   (El and logico es verdadero solo cuando las 2 condiciones son verdaderas)
||                  OR(O)               x||y                true    (El or logico es verdadero cuando una de las 2 condiciones es verdadera)
!                   Not(Negacion)        !A                 false   (El not cambia de valores a los opuestos)
>                   Mayor que           x>y                 false
<                   Menor que           x<y                 true
>=                  Mayor o igual que   x>=y                false
<=                  Menor o igual que   z<=y                true


g=true;
!!g = false= true;(una doble negacion es una afirmacion)


                */
int main()
{
    /*
    Sintaxis:

    if(condicion){
    instruscciones;
    }
    */
    /*Ejemplo 1: Realizar un programa en donde el usuario ingrese un numero
    y verifique si es el numero 10,de serlo mostrar un mensaje de que gano
    un premio!! */
/*
    int numero=0;
    cout<<"Ingrese un numero para saber si gana el premio:";cin>>numero;
    if(numero==10){
      cout<<"Felicidades Gano!!"<<endl;
    }*/
    /*Ejemplo 2: Con el programa anterior cambie la condicion para que todos
    los numeros excepto el 10 ganen un premio*/
    /*
 int numero=0;
    cout<<"Ingrese un numero para saber si gana el premio:";cin>>numero;
    if(numero!=10){
      cout<<"Felicidades Gano!!"<<endl;
    }*/


    return 0;
}
