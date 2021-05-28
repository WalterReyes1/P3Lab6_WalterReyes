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

	while(opcion != 5){
		switch(opcion=menu()){
			case 1:{
				
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
			case 3:{
				
				break;
			}
		}//fin switch
	}//fin while
	return 0;
}