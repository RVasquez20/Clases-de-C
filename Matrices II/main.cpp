#include <iostream>

using namespace std;

int main()
{
    /*int Contador=1;*/
    /*
    123
    456
    789
    */
    //El primer ciclo maneja las filas(horizontales)
   /*for(int i=0;i<3;i++){
        //El segundo ciclo maneja las columnas(Verticales)
    for(int j=0;j<3;j++){
        cout<<Contador;
        Contador++;
        }
        cout<<endl;
   }*/
  /* int Matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            cout<<Matriz[i][j];
    }
    cout<<endl;
   }*/

   int Filas=0,Columnas=0,Dato=0;
   cout<<"Ingrese el numero de Filas:";cin>>Filas;
   cout<<"Ingrese el numero de Columnas:";cin>>Columnas;
   int Matriz[Filas][Columnas];
   for(int i=0;i<Filas;i++){
    for(int j=0;j<Columnas;j++){
        cout<<"Ingrese el valor que ira en "<<"["<<i<<"]["<<j<<"]:";
        cin>>Matriz[i][j];
    }
   }
   for(int i=0;i<Filas;i++){
    for(int j=0;j<Columnas;j++){
        cout<<"["<<i<<"]["<<j<<"]"<<Matriz[i][j]<<",";
    }
    cout<<endl;
   }
   for(int i=0;i<Filas;i++){
    for(int j=0;j<Columnas;j++){
            if(i==j){
        cout<<Matriz[i][j]<<",";
            }
    }
    cout<<endl;
   }

    return 0;
}
