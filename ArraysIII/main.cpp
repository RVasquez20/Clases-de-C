#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   /* int numeros[5];
    int mayor=0;
    for(int i=0;i<5;i++){
        cout<<"Ingrese el valor que ira en la posicion "<<i<<endl;
        cin>>numeros[i];
    }
    //determinando cual numero es el mayor
    mayor=numeros[0];
    for(int i=1;i<5;i++){
        if(mayor<numeros[i]){
            mayor=numeros[i];
        }
    }
    cout<<"El numero mayor es : "<<mayor<<endl;
    //determinando distancia
    int distancia=0;
    for(int i=0;i<5;i++){
        distancia=mayor-numeros[i];
        cout<<"La distancia que separa a "<<numeros[i]<<" De "<<mayor<<" Es de :"
        <<distancia<<endl;
    }*/

    /*num aleatorios entre 0 a 99 array*/
    int numeros[10];
    srand(time(0));

    for(int i=0;i<10;i++){
        numeros[i]=rand()%100;//asignar numeros del 0 al 99
    }
    for(int i=0;i<10;i++){
        cout<<numeros[i]<<endl;
    }
int mayor=0;
//determinando cual numero es el mayor
    mayor=numeros[0];
    for(int i=0;i<10;i++){
        if(mayor<numeros[i]){
            mayor=numeros[i];
        }
    }
    cout<<"El numero mayor es : "<<mayor<<endl;
    //determinando las repeticiones
    int repeticiones=0;
     for(int i=0;i<10;i++){
        if(mayor==numeros[i]){
           repeticiones++;
        }
    }
    cout<<"Se repite "<<repeticiones<<" Veces"<<endl;
    return 0;
}
