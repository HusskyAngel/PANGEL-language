#include <list>
#include <string>
#include "../types/paobject.hpp"

#ifndef __ENV__HH__
#define __ENV__HH__

class Env{
	private:
		std::list<PAObject> environment;

	public:
		explicit Env();
		void addElement(PAObject); 
		void removeElement(std::string);
		void modifyElement(std::string,PAObject);

};

#endif
