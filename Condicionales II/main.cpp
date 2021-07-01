#include <iostream>
#include <math.h>//Funciones matematicas
#include <windows.h>//comandos de cmd

using namespace std;
//if else,switch, condicionales anidadas
int main()
{
    /*Ejemplo 1:Realice un programa en el cual
    el usuario ingrese una palabra , verificar si esa palabra es
    Ganador, si lo es mostrarle un mensaje diciendo: Felicidades gano :D,
    de lo contrario se cerrara el programa*/
    /*string palabra;
    cout<<"Ingrese una palabra:";cin>>palabra;
    if(palabra=="Ganador"){
        cout<<"Felicidades gano :D"<<endl;
    }*/

    /*Ejemplo 2: Realizar un programa en el cual le pregunten al usuario si desea continuar o no
    S||N , de ser si la respuesta debe limpiar la consola y mostrar continuando, de ser no
    debera cerrar la consola*/
    /*char opc;
    cout<<"Desea Continuar? S||N:";cin>>opc;
    //Pausa de determinado tiempo
    Sleep(5000);
    if(opc=='S'){
            system("CLS");//limpiar la consola
    //Cambio de color de consola
    system("COLOR 0A");
      cout<<"Continuando"<<endl;
    }
    //Pausar la consola
    system("PAUSE");*/

    //if else
    /*Ejemplo 3: Pedir al usuario un numero entero
    , si es el numero 10 mostrarle que gano, y si no, mostrarle que no gano nada*/
    /*int numero=0;
    cout<<"Ingrese un numero:";cin>>numero;
    if(numero==10){
        cout<<"Felicidades Gano"<<endl;
    }else{
    cout<<"No Gano Nada"<<endl;
    }*/

    /*Ejercicio:
    Realizar un programa en donde se soliciten 4 notas de un alumno,
    calcular el promedio y si es mayor o igual a 61 mostrar las notas y decir el promedio asi coomo
    un mensaje anunciando que aprobo,
    sino mostrar las notas, el promedio y un mensaje diciendo que reprobo*/
/*
    double nota1=0,nota2=0,nota3=0,nota4=0,promedio=0;
    cout<<"Ingrese la nota 1:";cin>>nota1;
    cout<<"Ingrese la nota 2:";cin>>nota2;
    cout<<"Ingrese la nota 3:";cin>>nota3;
    cout<<"Ingrese la nota 4:";cin>>nota4;
    promedio=(nota1+nota2+nota3+nota4)/4;
        if(promedio>=61){
                system("CLS");
                system("Color 0A");
               cout<<"La nota 1 es :"<<nota1<<endl;
               cout<<"La nota 2 es :"<<nota2<<endl;
               cout<<"La nota 3 es :"<<nota3<<endl;
               cout<<"La nota 4 es :"<<nota4<<endl;
               cout<<"El Promedio es :"<<promedio<<endl;
               cout<<"El Alumno Aprobo :D"<<endl;
        }else{
                system("CLS");
                system("Color 0c");
               cout<<"La nota 1 es :"<<nota1<<endl;
               cout<<"La nota 2 es :"<<nota2<<endl;
               cout<<"La nota 3 es :"<<nota3<<endl;
               cout<<"La nota 4 es :"<<nota4<<endl;
               cout<<"El Promedio es :"<<promedio<<endl;
               cout<<"El Alumno Reprobo :C"<<endl;
        }*/

        /*Ejemplo 4:Realizar un menu en donde el usuario pueda decidir si operar 2 numeros
        ya sea con suma o resta */

        int numeroUno=0,numeroDos=0,resultado=0,opc=0;
        cout<<"===========Menu Principal==========="<<endl;
        cout<<"|            1)Sumar               |"<<endl;
        cout<<"|            2)Restar              |"<<endl;
        cout<<"|            3)multiplicar         |"<<endl;
        cout<<"===================================="<<endl;
        cout<<"Ingrese la opcion que desea:";cin>>opc;
        system("CLS");
        if(opc==1){
         cout<<"Ingrese el numero 1:";cin>>numeroUno;
         cout<<"Ingrese el numero 2:";cin>>numeroDos;
         resultado=numeroUno+numeroDos;
         cout<<"La suma es:"<<resultado<<endl;
        }else if(opc==2){
         cout<<"Ingrese el numero 1:";cin>>numeroUno;
         cout<<"Ingrese el numero 2:";cin>>numeroDos;
         resultado=numeroUno-numeroDos;
         cout<<"La resta es:"<<resultado<<endl;
        }else if(opc==3){
         cout<<"Ingrese el numero 1:";cin>>numeroUno;
         cout<<"Ingrese el numero 2:";cin>>numeroDos;
         resultado=numeroUno*numeroDos;
         cout<<"La multiplicacion es:"<<resultado<<endl;
        }else{
        cout<<"Opcion no disponible :C";
        }

    return 0;
}
