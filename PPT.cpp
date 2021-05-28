#include "PPT.h"

PPT::PPT(string _titulo, int _numSlides, int _numPlantilla, bool _tieneAnimacion,string _nombre,string _autor, FileSystemNode* _padre)
:Archivo(_nombre,_autor,_padre) {
}

string PPT::toString(){
	string ns= to_string(this->numSlides);
	string np = to_string(this->numPlantilla);
	string b = to_string(this->tieneAnimaciones);
	return "Slides: "+ns+"\nPlantilla: "+np+"\nTiene animaciones: "+b;
}