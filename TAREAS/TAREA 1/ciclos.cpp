#include <iostream>

using namespace std;


int main() {

	
	
	int opcmenu=0;
	char opc=0, ed=176;
	do {
		system ("CLS");
		system ("color 0B");
	cout <<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<""<<endl;
	cout <<ed<<"          MENU PRINCIPAL              "                                                                                <<ed<<endl;
	cout <<ed<<"          1. CUADRADO                 "                                                                                <<ed<<endl;
	cout <<ed<<"          2. CIRCULO                  "                                                                                <<ed<<endl;
	cout <<ed<<"          3. FECHA                    "                                                                                <<ed<<endl;
	cout <<ed<<"          4. ROMBO                    "                                                                                <<ed<<endl;
	cout <<ed<<"         27. SALIR                    "                                                                                <<ed<<endl;
	cout <<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<ed<<""<<endl;

	
	cout << "INGRESE UNA OPCION:"; cin >> opcmenu;
	system ("cls");
	
	switch (opcmenu){
		
		case 1: {
			
			system ("CLS");
			system ("color 0A");
			
			for ( int i=0; i<10; i++){
				if (i==0||i==9){
					cout << "**********" << endl;
				}
				else {
					cout << "*        *" << endl;
				}
			}
			break;
		} // fin case 1
		
			case 2: {
				
			system ("CLS");
			system ("color 0D");
			
			for (int i=0; i<=6; i++){
				if (i==0||i==6){
					cout << " ***" << endl;
				}
				else {
					cout << "*   *" << endl; 
				}

			}
		} // fin case 2
	
			break;
			
			case 3: {
				
				system ("CLS");
				system ("color 0C");
				for (int i=0; i<=4; i++){
				for (int j=4; j>i; j--){
					cout << " ";
				}
				for (int k=0; k<i+1; k++){
					cout << " *";
				}
				cout << endl;
			}
				for (int i=0; i<=3; i++){
						cout << "     * "<<endl;
				}
				cout << endl;
				break;
			} //fin case 3
			
			case 4: {
				
				system ("CLS");
				system ("color 0F");
				
				for (int i=0; i<=4;i++){
					for (int j=4; j>i; j--)
						cout << " ";
					for (int k=0; k<i+1; k++)
							cout << " *";
							cout << "\n";
				}
				
				for (int i=0; i<=4-1;i++){
					for (int j=0; j<i+1; j++)
						cout << " ";
					for (int k=4; k>i; k--)
							cout << " *";
							cout << "\n";
				}
				cout << endl;
				break;
			} // fin case 4
			
			case 27: {
				exit (0);
				break;
			} // fin case 27
			
			default: {
				cout << "OPCION INVALIDA" << endl;
				break;
			} // fin de default
			
	}//fin switch
	cout << "QUIERE REGRESAR AL MENU ? S||N"<< endl;
	cin >> opc;
	
}while (opc == 'S');
return 0;
}//fin main
