#include <iostream>
#include <string>
#include "FileSystem.h"
#include "FileSystemNode.h"
#include "Archivo.h"
#include "Directorio.h"
#include "JPG.h"
#include "CPP.h"
#include "PPT.h"

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
	FileSystem* pc = new FileSystem();
	Directorio* descargas = new Directorio("Descargas","Walter",pc->getRoot());
	descargas->agregarArchivo(new PPT("Ballenas",12,14,true,"PowerPoint","Walter",descargas));
	descargas->agregarArchivo(new PPT("Pinguinos",12,14,true,"PowerPoint","Walter",descargas));
	descargas->agregarArchivo(new PPT("Nintendo",12,14,true,"PowerPoint","Walter",descargas));

	Directorio* fotos = new Directorio("Fotos","Walter",descargas);
	fotos->agregarArchivo(new JPG(true,"1080p",20,20,"Anubis","Walter",fotos));
	fotos->agregarArchivo(new JPG(true,"1080p",30,30,"Alcantara","Walter",fotos));
	fotos->agregarArchivo(new JPG(true,"1080p",40,40,"world","Walter",fotos));

	Directorio* codigo = new Directorio("Codigo","Walter",fotos);
	codigo->agregarArchivo(new CPP("Java.cpp","Walter",codigo,100,3));
	codigo->agregarArchivo(new CPP("walter.cpp","Walter",codigo,100,3));
	codigo->agregarArchivo(new CPP("señor.cpp","Walter",codigo,100,3));

	descargas->agregarDirectorio(pc->getRoot());
	fotos->agregarDirectorio(descargas);
	codigo->agregarDirectorio(fotos);
	//pc->getRoot()->imprimirRecursivo();
	/*
	if(dynamic_cast<Directorio*>(fotos)){
		Directorio* d = dynamic_cast<Directorio*>(fotos);
		d->imprimirRecursivo(x+1);
	}*/

	while(opcion != 5) {
		switch(opcion=menu()) {
			case 1: {

				break;
			}//fin case1
			case 2: {
				cout<<"Crear Directorios"<<endl;
				cout<<"<------------------>"<<endl;
				string nombre;
				string autor;
				cout<<"Ingrese nombre del directorio: ";
				cin>>nombre;
				cout<<"Ingrese el autor: ";
				cin>>autor;
				Directorio* d = new Directorio(nombre,autor,pc->getRoot());
				break;
			}// fin case 2
			case 3: {
				cout<<"Agregar Archivos"<<endl;
				cout<<"<------------------>"<<endl;
				int op =0 ;
				do {
					cout<<"1. Cpp "<<endl;
					cout<<"2. JPG "<<endl;
					cout<<"3. PPT "<<endl;
					cout<<"Ingrese una opcion: ";
					cin>>op;
				} while(op<1 ||op>3);
				if(op==1) {
					string nombre;
					string autor;
					int lineas;
					int errores;
					cout<<"Ingrese Nombre del cpp: ";
					cin>>nombre;
					cout<<"Ingrese Autor: ";
					cin>>autor;
					cout"Ingrese numeros de lineas: ";
					cin>>lineas;
					cout<<"Ingrese num de errores: ";
					cin>>errores;
					pc->getRoot()->agregarArchivo(new CPP(nombre,autor,pc->getRoot(),lineas,errores));
				}
				if(op==2 ) {
					string nombre;
					string autor;
					string resolucion;
					bool flash;
					double largo;
					doubleancho;
					int op2;
					do {
						cout<<"La foto tiene flash? \n 1. si \n 2. no"<<endl;
						cin >>op2;
					} while(op<1 || op >2);
					if(op2==1) {
						flash =true;
					} else {
						flash = false;
					}
					cout<<"Ingrese calidad: ";
					cin>>resolucion;
					cout<<"Ingrese ancho: ";
					cin>>ancho;
					cout<<"Ingrese largo: ";
					cin>>largo;
					cout"Ingrese nombre de la foto: ";
					cin>>nombre;
					cout<<"Ingrese auto: ";
					cin>>autor;
					pc->getRoot()->agregarArchivo(new JPG(flash,resolucion,largo,ancho,nombre,autor,pc->getRoot()));

				}
				if(op==3) {
					string titulo;
					int ns;
					int np;
					bool ta;
					stromg autor;

					cout<<"Ingrese elnombre del autor:  ";
					cin>>autor;

					cout<<"Ingrese Titulo de ppt: ";
					cin>>titulo;
					cout<<"Ingrese Numero de slides: ";
					cin>>ns;
					cout<<"Ingrese Numero de Plantilla: ";
					cin>>np;
					int op1=1;
					do {
						cout<<"El ppt tiene animacion? \n 1. si \n 2. no"<<endl;
						cin >>op2;

					} while(op1<1 || op1>2);
					if(op2==1) {
						ta =true;
					} else {
						ta = false;
					}

					pc->getRoot()->agregarArchivo(new PPT(titulo,ns,np,ta,titulo,autor,pc->getRoot()));

				}

				break;
			}
		}//fin switch
	}//fin while
	return 0;
}