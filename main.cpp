#include <iostream>
#include "node.h"
#include "tree.h"
int main(){
    BSTree* test = new BSTree();
    test -> setup();
    std::cout << test -> get_debug_string() << "\n";
    std::cout << test -> searchr(932) << "\n";
    
    return 0;
}

