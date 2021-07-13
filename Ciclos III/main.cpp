#include <iostream>

using namespace std;

int main()
{
  //do while
  /*Sintaxis:
  do{

  }while();
  */
  int opcmenu=0,n1=0,n2=0;
  char opc;
  do{
        system("CLS");
  cout<<"Menu Principal"<<endl;
  cout<<"1.Sumar"<<endl;
  cout<<"2.Restar"<<endl;
  cout<<"Seleccione la opcion que desea:";cin>>opcmenu;
      switch(opcmenu){
          case 1:{
              cout<<"Ingrese el primer numero:";cin>>n1;
              cout<<"Ingrese el segundo numero:";cin>>n2;
              cout<<"La suma es:"<<(n1+n2)<<endl;
          break;
          }//fin case 1
          case 2:{
              cout<<"Ingrese el primer numero:";cin>>n1;
              cout<<"Ingrese el segundo numero:";cin>>n2;
              cout<<"La restar es:"<<(n1-n2)<<endl;
          break;
          }//fin case 2
          default:{
              cout<<"Opcion incorrecta :C"<<endl;
          break;
          }//fin default
      }//fin switch
  cout<<"Desea Realizar otra operacion? S||N"<<endl;
  cin>>opc;
  }//fin do
  while(opc=='S');
    return 0;
}//fin main
