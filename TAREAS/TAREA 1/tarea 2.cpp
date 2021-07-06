#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;
/* 1 Realizar un programa en el cual se muestre en pantalla un menu, 
que mostrara las 4 operaciones basicas, cada una debe ser efectuada con 3 numeros*/

int main() {
	
	int numeroUno=0, numeroDos=0, numeroTres=0, resultado=0, opc=0;
	char ei=200, ed=201, h=186, m=205, n=188, b=187;
	cout <<ed<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<b<<""<<endl;
	cout <<h<<"          MENU PRINCIPAL              "                                                                                <<h<<endl;
	cout <<h<<"          1.SUMA                      "                                                                                <<h<<endl;
	cout <<h<<"          2.RESTA                     "                                                                                <<h<<endl;
	cout <<h<<"          3.MULTIPLICACION            "                                                                                <<h<<endl;
	cout <<h<<"          4.DIVISION                  "                                                                                <<h<<endl;
	cout <<ei<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<n<<""<<endl;
	cout << "INGRESE UNA OPCION:"; cin >> opc;
	
	system("cls");
	
	if (opc==1) 
	{	
		system ("color 0A");
		cout <<h<< "INGRESE PRIMER  NUMERO:";cin >> numeroUno;
		cout <<h<< "INGRESE SEGUNDO NUMERO:";cin >> numeroDos;
		cout <<h<< "INGRESE TERCER  NUMERO:";cin >> numeroTres;
		
		resultado = numeroUno + numeroDos + numeroTres;
		
		cout << "LA SUMA ES:" << resultado << endl;
	} 
	
	else if (opc==2) 
	{
		system ("color 0E");
		cout << "INGRESE PRIMER  NUMERO:"; cin >> numeroUno;
		cout << "INGRESE SEGUNDO NUMERO:"; cin >> numeroDos;
		cout << "INGRESE TERCER  NUMERO:"; cin >> numeroTres;
		
		resultado = numeroUno - numeroDos - numeroTres;
		
		cout << "LA RESTA ES:" << resultado << endl;
	}
	
	else if (opc==3) 
	{	
		system ("color 0D");
		cout << "INGRESE PRIMER  NUMERO:"; cin >> numeroUno;
		cout << "INGRESE SEGUNDO NUMERO:"; cin >> numeroDos;
		cout << "INGRESE TERCER  NUMERO:"; cin >> numeroTres;
		
		resultado = numeroUno * numeroDos * numeroTres;
		
		cout << "LA MULTIPLICACION ES:" << resultado << endl;
	}
	
	else if (opc==4) 
	{	
		system ("color 0B");
		cout << "INGRESE PRIMER  NUMERO:"; cin >> numeroUno;
		cout << "INGRESE SEGUNDO NUMERO:"; cin >> numeroDos;
		cout << "INGRESE TERCER  NUMERO:"; cin >> numeroTres;
		
		resultado = numeroUno / numeroDos / numeroTres;
		
		cout << "LA DIVISION ES:" << resultado << endl;
	}
	
	else
	{	
		cout << "LA OPCION NO EXISTE :C" << endl; 
	}
	
	system ("PAUSE");
	
	
	/* 2 Realizar un programa en el cual se pidan los datos personales (Nombre, Apellido, Anio de nacimiento) 
	y calcular la edad de la persona, al finalizar el ingreso de datos mostrar los datos aniadiendo la edad previamente calculada */
	
	char Nombre [10], Apellido [10];
	int  AnoNacimiento=0, Actual=0, Edad=0, opc=0;
	
	cout << "INGRESE SU NOMBRE:";         cin >> Nombre;
	cout << "INGRESE SU APELLIDO:";       cin >> Apellido;
	cout << "INGRESE ANO DE NACIMIENTO:"; cin >> AnoNacimiento;
	cout << "INGRESE ANO ACTUAL:";        cin >> Actual;
	
	Edad = Actual - AnoNacimiento;
	
	cout << "SU EDAD ES:" << Edad << endl;
	
	system ("cls");
	
	if (opc!=Edad)
	{
		cout << "SU NOMBRE ES:"   << Nombre << endl;
		cout << "SU APELLIDO ES:" << Apellido << endl;
		cout << "SU EDAD ES:"     << Edad << endl;
	}
	else 
	
	
	/* 3 Determinar la hipotenusa de un triángulo rectángulo 
	conocidas las longitudes de sus dos catetos*/
	
	float cat1=0, cat2=0, hip=0.0;
	
	cout << "INGRESE VALOR CATETO 1:"; cin >> cat1;
	cout << "INGRESE VALOR CATETO 2:"; cin >> cat2;
	
	hip = sqrt ((cat1 * cat1) + (cat2 * cat2));
	
	cout << "LA HIPOTENUSA ES:" << hip << endl;


	/*4 Desarrolle un programa que permita convertir calificaciones numéricas, según la siguiente tabla:
	A = 19 y 20, B =16, 17 y 18, C = 13, 14 y 15, D = 10, 11 y 12, E = 1 hasta el 9. 
	Se asume que la nota está comprendida entre 1 y 20.*/
	
	int nota=0;
	
	cout << "INGRESE NOTA DEL 1 AL 20:"; cin >> nota;
	
	if (nota==19||nota==20){
		cout << "NOTA A";
	}
	
	if (nota==16||nota==18){
		cout << "NOTA B";
	}
	
	if (nota>=13&&nota<=15){
		cout << "NOTA C";
	}
	
	if (nota>=10&&nota<=12){
		cout << "NOTA D";
	}
	
	if (nota>=1&&nota<=9){
		cout << "NOTA E";
	} 
	
	
	/* 5 Realice un programa que a partir de proporcionarle la velocidad de un automóvil, expresada en
	kilómetros por hora, proporcione la velocidad en metros por segundo */
	
	float VK=0, VM=0;
	
	cout << "INGRESE VELOCIDAD EN KILOMETROS POR HORA:"; cin >> VK;
	
	VM = (VK * 1000)/3600;
	
	cout << "LA VALOCIDAD EN MS ES:" << endl;
	cout << VM << endl;
	return 0;
}
