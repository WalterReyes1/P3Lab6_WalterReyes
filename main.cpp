#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int opcion = 0;
int menu() {
	while(true) {
		cout<<"Bienvenido "<<endl;
		cout<<"1.Imprimir FileSystem"<<endl;
		cout<<"2.Agregar Directorios"<<endl;
		cout<<"3.Agregar Archivoss"<<endl;
		cout<<"4.Buscar por nombre"<<endl;
		cout<<"5.Salir"<<endl;

		cout<<"Eliga una opcion: ";
		cin>>opcion;
		if(opcion > 0 && opcion <6) {
			return opcion;
		}

	}
}
int main(int argc, char** argv) {
	while(opcion != 5){
		switch(opcion=menu()){
			case 1:{
				
				break;
			}//fin case1
			case 2: {
				
				break;
			}// fin case 2
		}//fin switch
	}//fin while
	return 0;
}