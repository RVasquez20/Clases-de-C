#include <iostream>
#include <math.h>
#include <windows.h>
#include <conio.h>

using namespace std;

/* Realizar un menu en donde se implemente los siguientes ejercicios como Ejercicio 1 , Ejercicio 2...Ejercicio N:
1) Imprima todos los números naturales que hay desde la unidad hasta un número que
introducimos por teclado.
2) Imprima los números del 1 al 100. Que calcule la suma de todos los números pares por un lado,
y por otro, la de todos los impares.
3) Imprimir diez veces la serie de números del 1 al 10.
4)Imprimir, contar y sumar los múltiplos de 2 que hay entre una serie de números, tal que el
segundo sea mayor o igual que el primero.
5)Calcular el factorial de un número.
6) Mostrar independientemente la suma de los pares e impares de los numeros entre 1 y 1000
7) Leer dos valores distintos, determinar cuál de los dos valores es el mayor y escribirlo.
8)Desarrolle un algoritmo que permita convertir calificaciones numéricas, según la siguiente tabla:
A = 19 y 20, B =16, 17 y 18, C = 13, 14 y 15, D = 10, 11 y 12, E = 1 hasta el 9. Se asume que
la nota está comprendida entre 1 y 20.
9)Realice un programa que muestre un triangulo con la cantidad de * indicada por el usuario de forma ascendente :
Ejemplo :N=5
*
**
*
**
***
10)Realice un programa en donde se muestre una sucesion de numeros enteros desde 0 hasta el numero que digite el usuario:
Ejemplo N=5
0
0,1
0,1,2
0,1,2,3
0,1,2,3,4
0,1,2,3,4,5*/

int main (){
	
	int opcmenu=0, i, numeroTerminar=0, numero=0, impar=0, par=0, x=0, y=0, nota=0, a=0, b=0, n1=0, n2=0, aux=0, cont=0, acum=0;
	double factorial;
	char ed=176, opc=0;
	
	do{
		
		system ("CLS");
		system ("COLOR 0B");
	cout <<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<""<<endl;
	cout <<ed<<"          MENU PRINCIPAL              "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 1                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 2                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 3                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 4                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 5                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 6                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 7                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 8                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 9                 "                                                                                <<ed<<endl;
	cout <<ed<<"          EJERCICIO 10                "                                                                                <<ed<<endl;
	cout <<ed<<"          ESC)SALIR                       "                                                                                <<ed<<endl;                            
	cout <<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<""<<endl;

	cout << "INGRESE UNA OPCION:"; cin >> opcmenu;
	
	system ("cls");
	
	switch (opcmenu)
	{
		
		case 1:{
			system ("cls");
			system ("color 0A");
			
			cout<<"DIGITE HASTA QUE NUMERO DESEA TERMINAR: ";cin>>numeroTerminar;
			
			for (int i=0; i<=numeroTerminar; i++){
				cout << i << endl;
			}
			break;
		} // fin case 1
		
		case 2: {
			system ("cls");
			system ("color 0E");
			
			for(int i=0;i<=100;i++){
 				cout << i << endl;
 				    if(numero%2==0){
    				par += numero;
        		}
        		else {
        			impar += numero;
				}
				 numero += 1;
			}
			
			cout << "LA SUMA DE LOS PARES ES:" << par << endl;
			cout << "LA SUMA DE LOS IMPARES ES:" << impar << endl;
			break;
		} // fin case 2
		
		case 3: {
			
			system ("cls");
			system ("color 0D");
			for (int i=0; i<=10; i++){
				for (int i=0;i<=10; i++){
					cout << i << " ";
				}
				cout << endl;
				}
			break;
		} // fin case 3
			
		case 4: {
			
			system ("cls");
			system ("color 0B");
			
			cout << "=====INGRESE DOS NUMEROS=====" << endl;
			cout << "INGRESE PRIMER NUMERO:"; cin >> n1;
			cout << "INGRESE SEGUNDO NUMERO:", cin >> n2;
			
			if (n2<n1);{
				
				aux = n2;
				n2 = n1;
				n1 = aux;
			}
			printf ("ESTOS SON LOS MULTIPLOS DE 2 QUE HAY ENTRE: %d y %d\n", n1, n2);
			while(n1<=n2){
				if (n1%2==0){
					cout << n1 << endl;
					cont++;
					acum += n1;
				}
				n1++;
			}
			cout << "HAY MULTIPLOS:" <<cont<<endl;
			cout << "LA SUMA DE ELLOS ES:" <<acum<<endl;
			break;
		} // fin case 4
		
		case 5: {
			
			system ("cls");
			system ("color 0F");
			
			cout << "INGRESE UN NUMERO PARA CALCULAR EL FACTORIAL:"; cin >> x;
			
			factorial = 1;
			
			for ( y=1; y<=x; y++){
				factorial = y * factorial;
			}
			cout << "EL FACTORIAL ES:" << factorial << endl;
			break;
		} // fin case 5
		
		case 6:{
			
			system ("cls");
			system ("color 0C");
			
			for(int i=0;i<=1000;i++){
 				cout << i << endl;
 				    if(numero%2==0){
    				par += numero;
        		}
        		else {
        			impar += numero;
				}
				 numero += 1;
			}
			
			cout << "LA SUMA DE LOS PARES ES:" << par << endl;
			cout << "LA SUMA DE LOS IMPARES ES:" << impar << endl;
			
			
			break;
		} // fin case 6
		
		case 7:{
			
			system ("cls");
			system ("color 0A");
			
			cout << "INGRESE PRIMER NUMERO:"; cin >> a;
			cout << "INGRESE SEGUNDO NUMERO:"; cin >> b;
			
			if (a>=b){
				cout << "EL NUMERO MAYOR ES: "<<a;
			}
			else {
				cout << "EL NUMERO MAYOR ES:"<<b;
			}
			cout << endl;
			
			break;
		} // fin case 7
		
		case 8:{
			
			system ("cls");
			system ("color 0B");
			
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
			cout << endl;
			
			break;
		} // fin case 8
		
		case 9: {
			
			system ("cls");
			system ("color 0F");
			
			cout << "DIGITE UN NUMERO:"; cin >> numeroTerminar;
			
			for (int i=0; i<=numeroTerminar; i++){
				for (int j=0;j<i;j++){
					cout << "*";
				}
				cout << endl;
			}
			break;
		} // fin case 9
		
		case 10: {
			
			system ("cls");
			system ("color 0B");
			
			cout << "DIGITE UN NUMERO:"; cin >> numeroTerminar;
			
			for (int i=0; i<=numeroTerminar; i++){
				for (int j=0;j<i;j++){
					cout << j ;
				}
				
				cout << "\n";
			}
			break;
		} // fin case 10
		
		case 27:{
                exit(0);
            break;
            }
		
		default: {
			cout << "OPCION INVALIDA";
			break;
			
		} // fin de default
	} // fin de switch
	cout << "QUIERE REGRESAR AL MENU ? S||N"<< endl;
	cin >> opc;
	
}while (opc == 'S');
return 0;
} // fin del main
