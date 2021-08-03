#include <iostream>

using namespace std;

int main()
{
 int numeros[10];
 int seleccion=0,nuevoValor=0;
    for(int i=0;i<10;i++){
     cout<<"Ingrese el numero "<<(i+1)<<":";
     cin>>numeros[i];
    }

    for(int i=0;i<10;i++){
     cout<<(i+1)<<".)"<<numeros[i]<<endl;
    }

    cout<<"Ingrese el numero a modificar:";
    cin>>seleccion;
    seleccion=seleccion-1;
    cout<<"Ingrese el nuevo valor:";
     cin>>nuevoValor;
     numeros[seleccion]=nuevoValor;
    /*switch(seleccion){
        case 0:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[0]=nuevoValor;
        break;
        }
          case 1:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[1]=nuevoValor;
        break;
        }
     case 2:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[2]=nuevoValor;
        break;
        }
         case 3:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[3]=nuevoValor;
        break;
        }
         case 4:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[4]=nuevoValor;
        break;
        }
         case 5:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[5]=nuevoValor;
        break;
        }
         case 6:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[6]=nuevoValor;
        break;
        }
         case 7:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[7]=nuevoValor;
        break;
        }
         case 8:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[8]=nuevoValor;
        break;
        }
         case 9:{
            cout<<"Ingrese el nuevo valor:";
            cin>>nuevoValor;
            numeros[9]=nuevoValor;
        break;
        }

        deafult:{
            cout<<"Opcion invalida";
            break;
        }
    }*/
    for(int i=0;i<10;i++){
     cout<<(i+1)<<".)"<<numeros[i]<<endl;
    }
    return 0;
}
