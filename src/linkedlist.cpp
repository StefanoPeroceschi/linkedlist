#include <iostream>
#include <string.h>
#include <stdexcept>
#include "../include/linkedlist.h"





void ltpa::debug(std::string msg){
    std::cout << "DEBUG: " << msg << std::endl;
}





// LinkedList - returns a NEW empty LinkedList

ltpa::LinkedList* ltpa::init(){
    	ltpa::LinkedList* list = new ltpa::LinkedList;
	(*list).head=NULL;
	return list; 

};

/** Return true if the list is empty, false otherwise            
*/
bool ltpa::is_empty(ltpa::LinkedList* ll){
	if(ll -> head == NULL){
		return true;
	}
	else{
		return false;
	}


}







/** Adds item at the beginning of the list   
*/                
void ltpa::add(ltpa::LinkedList* ll, const char * label){    
	debug(std::string("adding ") + label );
	
	Node* tmp = new Node;
	tmp -> next = ll -> head;
	ll -> head = tmp;
	tmp -> label = label;	

}






/** For potentially complex data structures like this one, having a to_string function 
 *  is essential to  quickly inspect the label by printing it. 
 * 
 *  Note string to return has c++ type  string 
 * 
 *  - To initialize a c++ string, you can just set it to some like
 * 
 *      string s = "some characters"
 * 
 *  - To augment the string, you can write:
 * 
 *      s += "some characters"
*/
std::string ltpa::to_string(LinkedList* ll) {
            

	Node* current = ll->head;
	std::string out = "Lista: ";

	while (current != NULL){
		out += "\t";
		out += current -> label;
		current = current->next;
	}
	return out;
    
}




/**  Returns the size of the list 
 */
int ltpa::size(LinkedList* ll){
	int i=0;
	Node* current = ll -> head;
	while(current != NULL){
		i++;
		current = (*current).next;	
	}
	return i;
} 






/**
 *  Returns true if label is present in list, false otherwise              
*/
bool ltpa::search(ltpa::LinkedList* ll, const char * label){
                
	Node * tmp = ll-> head;
	while(tmp != NULL){
		if(tmp -> label == label){
			return true;
		}
		tmp = tmp ->next;
	}
	return false;
}






/*
    Removes the last item of the list, and returns its label

    - If the list is empty, write

        throw std::invalid_argument( "empty list!" );

      to stop function (and program) excecution (needs #include <stdexcept>)
*/        
const char* ltpa::pop(ltpa::LinkedList* ll){
	ltpa::Node * tmp = ll -> head;
       
	 if(tmp ==NULL){
		//throw std::invalid_argument( "empty list!" );
		return "empty List";
	}

	ltpa::debug("popping last item...");

	if(tmp -> next == NULL){
		const char* a = tmp -> label;
		free (tmp);
		ll -> head = NULL;
		return a;
	}
	
	while((tmp ->next)->next != NULL){
		tmp = tmp ->next;
	}
	const char* a = ((*tmp).next) -> label;
	free ((*tmp).next);
	tmp -> next = NULL;
	return a;
}






/*
    Deletes all nodes in the chain    
    Careful about deletion order!
*/
void ltpa::destroy(ltpa::LinkedList* ll){    
	//if( ll != NULL){
		
		ltpa::Node * tmp  = ll -> head, * del=NULL;
		while(tmp != NULL){
			del=tmp;
			tmp=tmp -> next;	
			free (del);	
		}
		ll -> head = NULL;
	   
	//}
}






