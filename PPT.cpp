#include "PPT.h"

PPT::PPT(string _titulo, int _numSlides, int _numPlantilla, bool _tieneAnimacion,string _nombre,string _autor, FileSystemNode* _padre)
:Archivo(_nombre,_autor,_padre) {
	this->autor=_autor;
	this->numSlides=_numSlides;
	this->numPlantilla=_numPlantilla;
	this->tieneAnimaciones=_tieneAnimacion;
}

string PPT::toString(){
	string ns= to_string(this->numSlides);
	string np = to_string(this->numPlantilla);
	string b = to_string(this->tieneAnimaciones);
	return "Autor: "+autor+" Slides: "+ns+"\nPlantilla: "+np+"\nTiene animaciones: "+b+"\n";
}