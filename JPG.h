#ifndef JPG_H
#define JPG_H

#include "Archivo.h"
#include "FileSystemNode.h"

class JPG : public Archivo {
	private :
		bool conFlash;
		string resolicion;
		double largo;
		double ancho;
	public:
		JPG(bool,string,double,double);
	protected:
};

#endif