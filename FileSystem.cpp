#include "FileSystem.h"

FileSystem::FileSystem() {
	this->root= new Directorio("root","Walter",NULL);
}
void FileSystem::setRoot(Directorio* _directorio){
	this->root=_directorio;
}
Directorio* FileSystem::getRoot(){
	return this->root;
}