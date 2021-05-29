#include "JPG.h"

JPG::JPG(bool _conFlash, string _resolucion,double _largo, double _ancho,string _nombre, string _autor,FileSystemNode* _padre):
Archivo(_nombre,_autor,_padre) {
	this->conFlash= _conFlash;
	this->resolucion = _resolucion;
	this->largo=_largo;
	this->ancho=_ancho;
	this->autor=_autor;
}
string JPG::toString(){
	string l = to_string(this->largo);
	string a = to_string(this->ancho);
	string t = to_string(this->conFlash);
	return "Autor: "+autor+" \n Flash : "+t + "\n Resolucion: "+this->resolucion +"\n Largo: "+l+"\n Ancho:  "+a;
}