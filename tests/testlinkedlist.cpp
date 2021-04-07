#include "linkedlist.h"
#include "catch2/catch2.hpp"


using namespace ltpa;

TEST_CASE("new LinkedList * doesn't point to ", "[linkedlist]") {
    LinkedList* ll = init();
    
    REQUIRE(ll->head==NULL);
}


TEST_CASE("add doesn't work ", "[cxx_examples]") {
    LinkedList* ll = init();
    add(ll,"a");
                
    REQUIRE(ll->head != NULL);
    
}






