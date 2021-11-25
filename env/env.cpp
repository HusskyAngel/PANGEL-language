#include "env.hpp"
#include <string>
#include <list>
#include "../types/paobject.hpp"


using namespace std;

/*
 * defining the envs functions like:
 * -add variables to the environment
 * -remove variables to the environment
 * -update variables to the environment 
 */

Env::Env(){

};

void Env::addElement(PAObject obj){
	this->environment.push_back(obj);
}

void Env::removeElement(string id){
	for (auto it = environment.begin(); it != environment.end();it++){
		PAObject  aux=*it;
		if(aux.id == id ){
			environment.remove(aux);
		}
		break;
	}
}

void Env::modifyElement(std::string id, PAObject obj){
	for (auto it = environment.begin(); it != environment.end();it++){
			PAObject  aux=*it;
			if(aux.id == id ){
				environment.remove(aux);
			}
			*it=obj;
			break;
		}
}

/*
 *
 *
 */
