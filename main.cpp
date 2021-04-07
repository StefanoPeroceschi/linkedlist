#include <iostream>
#include "include/linkedlist.h"

using namespace ltpa;

int main() {

    LinkedList* ll = init();

    pop(ll);
    is_empty(ll);

    add(ll, "a");
    add(ll, "b");
    add(ll, "c");

        
    std::cout << to_string(ll) << std::endl;

    std::cout << "size:" << size(ll) << std::endl;

    add(ll, "d");

    std::cout << to_string(ll) << std::endl;

    std::cout << "size:" << size(ll) << std::endl;


    std::cout << "search(ll,\"a\"): " << (search(ll, "a") ? "true" : "false") << std::endl;

    std::cout << "search(ll,\"z\"): " << (search(ll, "z")  ? "true" : "false") << std::endl;

	

    std::cout << pop(ll) << std::endl;    
    
    std::cout << to_string(ll) << std::endl;

    std::cout << pop(ll) << std::endl;    

    std::cout << to_string(ll) << std::endl;

    std::cout << pop(ll) << std::endl;    
    
    std::cout << to_string(ll) << std::endl;

    std::cout << pop(ll) << std::endl;    
    
    std::cout << to_string(ll) << std::endl;


    std::cout << pop(ll) << std::endl;            

    destroy(ll);

    std::cout << "destroyed"  << std::endl;    
    add(ll, "a");
    add(ll, "b");
    add(ll, "c");

        
    std::cout << to_string(ll) << std::endl;
      destroy(ll);
} 

  

