#include "Directorio.h"

Directorio::Directorio(string _nombre, string _autor, FileSystemNode* _padre):FileSystemNode(_nombre, _autor, _padre) {
}

void Directorio::imprimirRecursivo(int x){
	
}
void Directorio::agregarArchivo(FileSystemNode* _archivo){
	hijos.push_back(_archivo);
}
void Directorio::agregarDirectorio(FileSystemNode* _directorio){
	hijos.push_back(_directorio);
}
void Directorio::buscarPorNombre(string _cadena){
	
}
string Directorio::toString(){
	return " ";
}