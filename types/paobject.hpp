#include <stdlib.h>
#include <string>

#ifndef __PAOBJECT__HH__
#define __PAOBJECT__HH__

#define INT_TYPE 1
#define DOUBLE_TYPE 2
#define FLOAT_TYPE 3
#define BOOL_TYPE 4
#define STRING_TYPE 5
#define DICTIONARY_TYPE 6
#define ARRAY_TYPE 7
#define LIST_TYPE 8

class PAObject{
	
	public:

		size_t size;
		void * value;
		int type;
		std::string id;
		explicit PAObject(size_t, void*, int,std::string);

};


#endif 
