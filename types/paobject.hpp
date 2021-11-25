#include <stdlib.h>
#include <string>

#ifndef __PAOBJECT__HH__
#define __PAOBJECT__HH__

class PAObject{
	
	public:

		size_t size;
		void * value;
		int type;
		std::string id;
		explicit PAObject(size_t, void*, int,std::string);

};


#endif 
