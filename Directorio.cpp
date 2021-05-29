#include "Directorio.h"
#include <iostream>
using namespace std;
Directorio::Directorio(string _nombre, string _autor, FileSystemNode* _padre):FileSystemNode(_nombre, _autor, _padre) {
	this->autor=_autor;
}

void Directorio::imprimirRecursivo(int x) {
	string s="";


	for(int i =0; i<getHijos().size(); i++) {
		int cant = x*6;
		for(int i =0; i<cant; i++) {
			s+=" ";
		}
		if(dynamic_cast<Directorio*>(hijos[i])) {
			FileSystemNode* d = hijos[i];
			s+= d->getNombre()+"\n";
		} else {
			Archivo* a = dynamic_cast<Archivo*>(hijos[i]);
			string f = a->getNombre();

			s+=a->getNombre()+"\n";
				
				//s+=a->toString();
		}
	}
	s+="\n";
	cout<<s<<endl;

}


void Directorio::agregarArchivo(FileSystemNode* _archivo) {
	hijos.push_back(_archivo);
	cout<<"Tamano de lista agregado archivo: "<<hijos.size()<<endl;

}
void Directorio::agregarDirectorio(FileSystemNode* _directorio) {
	hijos.push_back(_directorio);
	cout<<"Tamano de lista: "<<hijos.size()<<endl;

}
vector<FileSystemNode*>Directorio::getHijos() {
	return this ->hijos;
}
void Directorio::buscarPorNombre(string _cadena) {

	for(int i = 0; i< getHijos().size(); i++) {
		if(dynamic_cast<Directorio*>(hijos[i])) {
			FileSystemNode* d = hijos[i];
			string f = d->getNombre();
			if((strstr(f.c_str(),_cadena.c_str()))) {
				cout<<i+1<<". "<<d->getNombre()<<endl;
				cout<<" "+d->toString()<<endl;
			}

		} else {
			Archivo* a = dynamic_cast<Archivo*>(hijos[i]);
			string f = a->getNombre();
			if((strstr(f.c_str(),_cadena.c_str()))) {
				cout<<i+1<<". "<<a->getNombre()<<endl;
				cout<<" "+a->toString()<<endl;
			}
		}

	}
}
string Directorio::toString() {
	return "Autor: "+autor+"\n";
}