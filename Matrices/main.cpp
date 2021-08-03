#include <iostream>

using namespace std;

int main()
{
int cantidad=0,suma=0,promedio=0;
cout<<"Ingrese la cantidad de notas que va a promediar:";
cin>>cantidad;
int nota[cantidad];
for(int i=0;i<cantidad;i++){
    cout<<"Ingrese la nota "<<(i+1)<<":";cin>>nota[i];
    suma=suma+nota[i];
}
promedio=suma/cantidad;
if(promedio>72){
    cout<<"El estudiante Aprobo";
}else{
cout<<"El estudiante Reprobo";
}

    return 0;
}
