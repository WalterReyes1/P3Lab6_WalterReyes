#include "CPP.h"

CPP::CPP(string _nombre, string _autor, FileSystemNode* _padre ,int _lineasCodigo, int _numErrores):
Archivo(_nombre,_autor,_padre) {
	this->numErrores=_numErrores;
	this->lineasCodigo = _lineasCodigo;
	this->autor=_autor;
}
string CPP::toString(){
	string L= to_string(this->lineasCodigo);
	string E = to_string(this->numErrores);
	return "Autor: "+this->autor+"\n Linea de codigo: "+L+"\n NumErrores: "+E;
}