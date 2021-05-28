#ifndef CPP_H
#define CPP_H

#include "Archivo.h"
#include "FileSystemNode.h"
class CPP : public Archivo {
	private :
		int lineasCodigo;
		int numErrores;
		
	public:
		CPP(string,string,FileSystemNode*, int,int);
		virtual string toString();
};

#endif