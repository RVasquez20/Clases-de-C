#include <iostream>

using namespace std;

int main()
{
    /*sintaxis:
    while(condicion){

    }

    */
    /*Ejemplo 1: Realice un programa en el cual solicite 4 notas de estudiantes
    y muestre el promedio, utilizando while*/
    /*double nota=0,promedio=0;
    int contador=0;
    while(contador<4){
        cout<<"Ingrese la nota :"<<(contador+1)<<endl;
        cin>>nota;
        promedio+=nota;
        contador++;
    }
    promedio/=4;
    cout<<"El promedio es :"<<promedio<<endl;*/
    /*Ejemplo 2: realizar un menu con la opcion de sumar o restar 2 numeros
    y al finalizar preguntar al usuario si desea regresar al menu o desea salir*/
    /*bool repite=true;
    int numero1=0,numero2=0,resultado=0;
    char opc;
    while(repite){
        cout<<"Menu principal"<<endl;
        cout<<"1)Sumar"<<endl;
        cout<<"2)Restar"<<endl;
        cout<<"Opcion:";cin>>opc;
        switch(opc){
            case '1':{
                cout<<"Ingrese el primer numero a Sumar:";cin>>numero1;
                cout<<"Ingrese el segundo numero a Sumar:";cin>>numero2;
                resultado=numero1+numero2;
                cout<<"La suma es:"<<resultado<<endl;
            break;
            }
            case '2':{
                cout<<"Ingrese el primer numero a Restar:";cin>>numero1;
                cout<<"Ingrese el segundo numero a Restar:";cin>>numero2;
                resultado=numero1-numero2;
                cout<<"La Resta es:"<<resultado<<endl;
            break;
            }
            default:{
                cout<<"Opcion incorrecta"<<endl;
            break;
            }
        }
        cout<<"Desea regresar al menu S||N?"<<endl;
        cin>>opc;
        if(opc=='n'||opc=='N'){
            repite=false;
        }
    }*/
    /*Ejercicio: Ingresar el ultimo termino de la serie mostrado a continuacion: 2,4,6,8,10,...,n
    mostrar la suma total de la serie completa en pantalla*/
    /*int n=0,serie=0,suma=0;
    cout<<"Ingrese el ultimo numero de la serie:";cin>>n;
    cout<<"Serie=";
    while(serie<=n){
        cout<<serie<<",";
        suma+=serie;
        serie+=2;
    }
    cout<<endl<<endl;
    cout<<"La suma de la serie es:"<<suma<<endl;*/
    //Ejercicio 2:

    /* Calcula La Minima Unidad de Un numero. ej. 546=5+4+6=15=1+5=6.*/
   /* int n=0,r=0;
    cout<<"Ingrese un numero:";cin>>n;
    do{
        r=0;
        while(n>0){
            r+=n%10;
            n/=10;

        }
        n=r;
    }while(r>9);
    cout<<"El minimo es:"<<r<<endl;*/
    //Tarea : Realizar un programa en el cual el usuario ingrese cualquier numero de 1 a 1000
    //en numeros romanos y lo transforme a letras V=cinco,   IV=cuatro,   XI=once
    return EXIT_SUCCESS;
}
