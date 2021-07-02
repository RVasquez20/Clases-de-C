#include <iostream>
#include <math.h>
#include <windows.h>
#include <conio.h>

using namespace std;
//Switch, sentencias o condicionales anidadas
//Ciclos
int main()
{
    /*char ei=201,h=205;
     int numeroUno=0,numeroDos=0,resultado=0;
     char opc;
        cout<<ei<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<"Menu Principal"<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<"="<<endl;
        cout<<"|            1)Sumar               |"<<endl;
        cout<<"|            2)Restar              |"<<endl;
        cout<<"|            3)multiplicar         |"<<endl;
        cout<<"|          Esc)salir               |"<<endl;
        cout<<"===================================="<<endl;
        cout<<"Ingrese la opcion que desea:";opc=getch();
        system("CLS");
        switch(opc){
            case '1':{
             cout<<"Ingrese el numero 1:";cin>>numeroUno;
             cout<<"Ingrese el numero 2:";cin>>numeroDos;
             resultado=numeroUno+numeroDos;
             cout<<"La suma es:"<<resultado<<endl;
            break;
            }
            case '2':{
             cout<<"Ingrese el numero 1:";cin>>numeroUno;
             cout<<"Ingrese el numero 2:";cin>>numeroDos;
             resultado=numeroUno-numeroDos;
             cout<<"La resta es:"<<resultado<<endl;
            break;
            }
            case '3':{
             cout<<"Ingrese el numero 1:";cin>>numeroUno;
             cout<<"Ingrese el numero 2:";cin>>numeroDos;
             resultado=numeroUno*numeroDos;
             cout<<"La multiplicacion es:"<<resultado<<endl;

            break;
            }
            case 27:{
                exit(0);
            break;
            }

            default:{
                cout<<"Opcion no disponible :C";
            break;
            }

        }*/
        /*if(opc==1){
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
        }*/
        /*Ejercicio 1:Realizar un programa en el cual al precionar un numero entre 1 a 7 diga el dia de
        la semana que le corresponde, si el numero no esta dentro del rango debera mostrar
        un mensaje diciendo numero erroneo*/
/*
        int numero=0;
        cout<<"Ingrese un numero porfavor :D :";cin>>numero;
        switch(numero){
        case 1:{
            cout<<"Lunes :c"<<endl;
        break;
        }
        case 2:{
            cout<<"Martes :/"<<endl;
        break;
        }
        case 3:{
            cout<<"Miercoles :|"<<endl;
        break;
        }
        case 4:{
            cout<<"Jueves :)"<<endl;
        break;
        }
        case 5:{
            cout<<"Viernes :D"<<endl;
        break;
        }
        case 6:{
            cout<<"Sabado :D"<<endl;
        break;
        }
        case 7:{
            cout<<"Domingo  :D"<<endl;
        break;
        }

        default:{
            cout<<" numero erroneo :C"<<endl;
        break;
        }
        }*/
        //Condicionales anidadas
        /*Ejemplo: cree un menu en donde tenga las siguientes opciones:
        1)Sumar 2 numeros que sean positivos
        2)Ingresar 4 notas y promediarlas , verificar si el promedio es
        mayor a 61 mostrar que aprobo junto con sus notas y promedio de igual manera si reprobo
        Esc) salir

        cada opcion del menu debe estar hecha y solamente se debe mostrar en el menu
        Ejercicio 1,Ejercicio 2 ...Ejercicio N
        */
///---> OJO::: todas las tareas siguientes deben ser presentadas con menus y realizados con diseño
         int numero1=0,numero2=0;
         double n1,n2,n3,n4;
         char ei=201,h=205;
     int numeroUno=0,numeroDos=0,resultado=0;
     char opc;
        cout<<ei<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<"Menu Principal"<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<"="<<endl;
        cout<<"|            1)Ejercicio 1         |"<<endl;
        cout<<"|            2)Ejercicio 2         |"<<endl;
        cout<<"|             Esc)salir            |"<<endl;
        cout<<"===================================="<<endl;
        cout<<"Ingrese la opcion que desea:";opc=getch();
        system("CLS");
        switch(opc){
        case '1':{

        cout<<"Ingrese el primer numero a sumar :";cin>>numero1;
        cout<<"Ingrese el segundo numero a sumar :";cin>>numero2;
            if(numero1>0 && numero2>0){
                cout<<" La suma es :"<<numero1+numero2<<endl;
            }else{
            cout<<"Uno de los dos numeros no es positivo :C"<<endl;
            }
        break;
        }

        case '2':{
          cout<<"Ingrese la nota 1:";cin>>n1;
          cout<<"Ingrese la nota 2:";cin>>n2;
          cout<<"Ingrese la nota 3:";cin>>n3;
          cout<<"Ingrese la nota 4:";cin>>n4;
              if(((n1+n2+n3+n4)/4)>61){
                cout<<"La nota 1:"<<n1<<endl;
              cout<<"La nota 2:"<<n2<<endl;
              cout<<"La nota 3:"<<n3<<endl;
              cout<<"La nota 4:"<<n4<<endl;
              cout<<"El promedio es: "<<((n1+n2+n3+n4)/4)<<endl;
              cout<<"El estudiante Aprobo"<<endl;
              }else{
                cout<<"La nota 1:"<<n1<<endl;
              cout<<"La nota 2:"<<n2<<endl;
              cout<<"La nota 3:"<<n3<<endl;
              cout<<"La nota 4:"<<n4<<endl;
              cout<<"El promedio es: "<<((n1+n2+n3+n4)/4)<<endl;
              cout<<"El estudiante Reprobo"<<endl;
              }
          break;
        }

        case 27:{
            exit(0);
        break;
        }
        default:{
            cout<<"Opcion no disponible"<<endl;
        break;
        }
        }

    return 0;
}
