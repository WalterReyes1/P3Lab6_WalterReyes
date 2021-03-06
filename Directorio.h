#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <vector>
#include <string>
#include <stdlib.h>
#include "FileSystemNode.h"
#include "Archivo.h"
using namespace std;

class Directorio : public FileSystemNode {
	private:
		vector<FileSystemNode*>hijos;
	public:
		Directorio(string,string,FileSystemNode*);
		string toString();
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		vector<FileSystemNode*> getHijos();
};


#endif