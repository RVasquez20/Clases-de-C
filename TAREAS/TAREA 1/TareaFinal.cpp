#include <iostream>
using namespace std;

int main (){
	
	/* SUMA DE MATRICES */
	
	/*int A[2][2];
	int B[2][2];
	int Matriz[2][2];
	
	//primer matriz
	system("cls");
	system("color 0A");
	cout <<"-----------------------------------"<<endl;
	cout << "PRIMERA MATRIZ"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << "Ingrese el valor que ira en "<<"["<<i<<"]["<<j<<"]:";
			cin >> A[i][j];
		}
		cout << endl;
	}
	
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<A[i][j]<<",";
		}
		cout<<endl;
	}
	cout <<"-----------------------------------"<<endl;
	
	//segunda matriz
	cout <<"-----------------------------------"<<endl;
	cout << "SEGUNDA MATRIZ"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << "Ingrese el valor que ira en "<<"["<<i<<"]["<<j<<"]:";
			cin >> B[i][j];
		}
		cout << endl;
	}
	
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<B[i][j]<<",";
		}
		cout<<endl;
	}
	cout <<"------------------------------------"<<endl;
	
	//suma 
	cout <<"------------------------------------"<<endl;
	cout << "SUMA DE MATRICES"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << A[i][j]+B[i][j]<<",";
		}
		cout<<endl;
	}*/
	
	
	/* MOSTRANDO DIAGONAL INVERSA*/
	
	/*int Filas=0, Columnas=0, Datos=0;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"LLENADO DE MATRIZ"<<endl;
	cout << "INGRESE NUMERO DE FILAS: "; cin >> Filas;
	cout << "INGRESE NUMERO DE COLUMNAS: "; cin >> Columnas;
	int Matriz[Filas][Columnas];
	for (int i=0; i<Filas; i++){
		for (int j=0; j<Columnas; j++){
			cout << "INGRESE EL VALOR QUE IRA EN "<<"["<<i<<"]["<<j<<"]:";
			cin>>Matriz[i][j];
		}
	}
	cout<<"---------------------------------------------"<<endl;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"MOSTRANDO MATRIZ ORIGINAL"<<endl;
	for (int i=0; i<Filas; i++){
		for (int j=0; j<Columnas; j++){
			cout<<Matriz[i][j]<<",";
		}
		cout<<endl;
	}
	cout<<"---------------------------------------------"<<endl;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"MOSTRANDO DIAGONAL PRINCIPAL INVERSA"<<endl;
	for (int i=0; i<Filas; i++){
		for (int j=0; j<Columnas+1; j++){
			if(i==2-j){
				cout<<Matriz[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"---------------------------------------------"<<endl;*/
	
	/* MOZTRANDO MATRIZ TRANSPUESTA */	
	
	/*int Filas=0, Columnas=0, Datos=0;
	
	cout<<"---------------------------------------------"<<endl;
	system("color 0B");
	cout<<"LLENADO DE MATRIZ"<<endl;
	cout << "INGRESE NUMERO DE FILAS: "; cin >> Filas;
	cout << "INGRESE NUMERO DE COLUMNAS: "; cin >> Columnas;
	int Matriz[Filas][Columnas];
	for (int i=0; i<Filas; i++){
		for (int j=0; j<Columnas; j++){
			cout << "INGRESE EL VALOR QUE IRA EN "<<"["<<i<<"]["<<j<<"]:";
			cin>>Matriz[i][j];
		}
	}
	cout<<"---------------------------------------------"<<endl;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"MOSTRANDO MATRIZ ORIGINAL"<<endl;
	for (int i=0; i<Filas; i++){
		for (int j=0; j<Columnas; j++){
			cout <<Matriz[i][j]<<",";
		}
		cout<<endl;
	}
	cout<<"---------------------------------------------"<<endl;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"MOSTRANDO MATRIZ TRANSPUESTA"<<endl;
	for (int i=0; i<Filas; i++){
		for (int j=0; j<Columnas; j++){
			cout << Matriz[j][i]<<",";
		}
		cout<<endl;
	}
	cout<<"---------------------------------------------"<<endl;*/
	return 0;
}
