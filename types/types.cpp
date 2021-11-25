#include "paobject.hpp"
#include <string>

using namespace std;

PAObject::PAObject(size_t size, void * value, int type,string id){
	this->size = size;
	this->value = value;
	this->type = type;
	this->id=id;
}
