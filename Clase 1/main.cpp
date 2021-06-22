#include <iostream>//Libreria

using namespace std;//Espacio de nombre

//Funcion principal
//tipo nombre

/*Funcion principal en donde se ejecuta todo
el programa*/
int main()
{
    /*
    Tipos de datos:
    Clasificaciones: Primitivos y no Primitivos.

    Tipos de datos Primitivos:

    Tipo                         Significado
    -------------------------------------------------
    byte                               8 bits
    int                             Enteros
    string                          Cadena de texto
    char                            es un caracter
    double                          numeros decimales(2d)
    float                           numeros decimales(mayor cantidad de decimales que un double)
    bool                            valores booleanos(true,false)
    long int                        numeros enteros largos
    shot int                        entero pequenio


    Tipos de datos No Primitivos:

    Tipo                         Significado
    -------------------------------------------------
    Integer                         Enteros
    Character                       Caracteres
    String                          Cadenas de texto
    Double                          Decimales 2d
    Float                           Decimales
    Boolean                         Valores Booleanos


    */
    /*

    Operador                  Ejemplo c++
    --------------------------------------
    suma                        4+5 | x+y
    resta                       4-5 | x-y
    multiplicacion              4*5 | x*y
    Division                    4/5 | x/y           El tipo de dato que va a recibir la operacion sera double
    residuo                        4%5

    */
    //CamelCase
    /* NumeroUno=0,NumeroDos=0;
    //cout-> mensaje en pantalla
    cout << "Ingrese un numero" <<endl;
    cin>>NumeroUno;
    cout << "Ingrese un numero" <<endl;
    cin>>NumeroDos;
    cout<<"La Suma es:"<<NumeroUno+NumeroDos<<endl;
                                                    */
    int Numero=0;
    double Decimal=0.0;
    char Caracter;
    /*string Cadena="";
        string Cadena="Hola";
        string Cadena=null;

    */
    float DecimalDos=0.0;
    bool Condicion=true;//Siempre tiene que estar inicializado ya sea en true o en false
    cout<<"Ingrese un numero entero"<<endl;
    cin>>Numero;

    cout<<"Ingrese un numero decimal"<<endl;
    cin>>Decimal;

    cout<<"Ingrese un Caracter"<<endl;
    cin>>Caracter;

    cout<<"Ingrese un numero DecimalDos"<<endl;
    cin>>DecimalDos;



    cout<<"El numero entero es:"<<Numero<<endl;
    cout<<"El Caracter es:"<<Caracter<<endl;
    cout<<"El numero Decimal es:"<<Decimal<<endl;
    cout<<"El numero DecimalDos es:"<<DecimalDos<<endl;
    cout<<"La Condicion es:"<<Condicion<<endl;


    return 0;
}
