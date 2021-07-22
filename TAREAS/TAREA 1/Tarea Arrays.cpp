#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

/* 1. Leer 5 valores de un array de enteros y deducir cuál es la distancia que les separa del número mayor.
2. Hacer un programa en C++ que llene un array de 10 enteros con números aleatorios del 0 al 99, 
luego de eso los muestre en pantalla y diga cuál es el elemento mayor y cuántas veces se repite.
3. Que lea 10 números por teclado, los almacene en un array y muestre la suma, resta, multiplicación y división de todos.
4. Que lea 10 números por teclado, los almacene en un array y los ordene de forma ascendente.
5. Que lea 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 10 números en pantalla mediante un solo array. */

int main() 
{
	
	int opcmenu=0;
	char ed=176, opc=0;
	
	do {
		
		system ("cls");
		system ("color 0B");
		
		cout <<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<""<<endl;
		cout <<ed<<"          MENU PRINCIPAL              "                                                                                <<ed<<endl;
		cout <<ed<<"          EJERCICIO 1                 "                                                                                <<ed<<endl;
		cout <<ed<<"          EJERCICIO 2                 "                                                                                <<ed<<endl;
		cout <<ed<<"          EJERCICIO 3                 "                                                                                <<ed<<endl;
		cout <<ed<<"          EJERCICIO 4                 "                                                                                <<ed<<endl;
		cout <<ed<<"          EJERCICIO 5                 "                                                                                <<ed<<endl;
		cout <<ed<<"          ESC.SALIR                   "                                                                                <<ed<<endl;
		cout <<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<""<<endl;
		
		cout << "INGRESE UNA OPCION:"; cin >> opcmenu;
		
		switch (opcmenu)
		{
			case 1: {
				
				system ("cls");
				system ("color 0C");
				
				int numero[5];
				int mayor=0;
				
				for (int i=0; i<5; i++){
					cout << "INGRESE UN NUMERO PARA LA POSICION "<<i<<endl;
					cin >> numero[i];
				}	
				
				mayor=numero[0];
				for (int i=1; i<=5; i++){
					if (mayor<numero[i]){
						mayor=numero[i];
					}
				}
				cout << "EL NUMERO MAYOR ES : " << mayor <<endl;
				
				int distancia=0;
				for (int i=0;i<5;i++){
					distancia=mayor-numero[i];
					cout << "LA DISTANCIA QUE SEPARA A "<<numero[i]<<" DE "<<mayor<<"ES DE :"<<distancia<<endl;
				}
				break;
			}//fin case 1
			
			case 2: {
				
				system ("cls");
				system ("color 0F");
				
				int numeros[10];
				int mayor=0, repeticiones=0;
				
				srand(time(0));
				for (int i=1; i<10; i++){
				cout << rand()%100;
				}
				cout <<numeros[i]<<endl;
				
				mayor=numeros[0];
				for (int i=0; i<10; i++){
				if (mayor<numeros[i]){
				mayor=numeros[i];
				}
			}
				cout << "EL NUMERO MAYOR ES :" << mayor << endl;
				
				for (int i=0;i<10; i++){
				if(mayor==numeros[i]){
				repeticiones++;
				}
			}
			
				cout << "SE REPITE  "<<repeticiones<<"VECES"<<endl;
				
				
				break;
			}//fin case 2
			
			case 3: {
				
				system ("cls");
				system ("color 0D");
				
				int numero[10];
				int suma=0, resta=0, multiplicacion=0, division=0;
				
				for (int i=0; i<10; i++){
					cout << "Ingrese un numero:"; cin >> numero[i];
				}
				
				suma=numero[0];
				resta=numero[0];
				multiplicacion=numero[0];
				division=numero[0];
				
				for (int i=1; i<10; i++){
					suma=suma+numero[i];
					resta=resta-numero[i];
					multiplicacion=multiplicacion*numero[i];
					division=division/numero[i];
				}
				
				cout << "La suma es:" << suma << endl;
				cout << "La resta es:" << resta << endl;
				cout << "La multiplicacion es:" << multiplicacion << endl;
				cout << "La division es:" << division << endl;

				break;
			}// fin case 3
			
			case 4:{
				
				system ("cls");
				system ("color 0E");
				
				int numero [10], aux=0, n=10;
				
				for (int i=0; i<n; i++){
					cout << "ESCRIBA UN NUMERO:"; cin >> numero [i];
				}
				
				cout << endl;
				cout << "FORMA ASCENDENTE"<<endl;
				for (int i=0; i<n-1; i++){
				
				for (int j=i+1; j<n; j++){
					if (numero[i]<numero[j]){
						aux=numero[i];
						numero[i]=numero[j];
						numero[j]=aux;
					}
				}
			}
			for (int i=n-1; i>=0; i--){
				cout << numero[i] << endl;
			}
				break;
			}//fin case 4
			
			case 5: {
				
				system ("cls");
				system ("color 0A");
				
				int array1[5], array2[5], array3[10];
				
				for (int i=0; i<5; i++){
					cout << "INGRESE UN NUMERO DEL ARRAY 1:";  cin >> array1[i];
				}
				cout << endl;
				for (int i=0; i<5; i++){
					cout << "INGRESE UN NUMERO DEL ARRAY 2:"; cin >> array2[i];
				}
				
				cout << endl;
				cout << "EL ARRAY ES"<<endl;
				for (int i=0; i<5; i++){
					array3[i]=array1[i];
				}
				
				for (int i=0; i<5; i++){
					array3[5+i]=array2[i];
				}
				
				for (int i=0; i<10; i++){
					cout << array3[i] <<endl;
				}
				
				break;
			} // fin case 5
			
			case 27:{
                exit(0);
            break;
            }
		
			default: {
			cout << "OPCION INVALIDA";
			break;}
			
		}// fin switch
		cout << "QUIERE REGRESAR AL MENU ? S||N"<< endl;
	cin >> opc;
		
	} while (opc == 'S');//fin do while
	return 0;

}//fin main
	
	

