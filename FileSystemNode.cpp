#include "FileSystemNode.h"

FileSystemNode::FileSystemNode(string _nombre,string _autor, FileSystemNode* _padre) {
	this ->nombre = _nombre;
	this ->autor = _autor;
	this ->padre = _padre;
}
string FileSystemNode::getNombre(){
	return this->nombre;
}
string FileSystemNode::toString(){
	return "";
}