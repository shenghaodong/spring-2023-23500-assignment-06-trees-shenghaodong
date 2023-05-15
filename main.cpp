#include <iostream>
#include "node.h"
#include "tree.h"
int main(){
    BSTree* test = new BSTree();
    test -> setup();
    std::cout << test -> get_debug_string() << "\n";
    std::cout << "Searching for: " << test -> searchr(8) << std::endl;
    test -> deleteNode(8);
    std::cout << "Attempting to delete 8" << std::endl;
    std::cout << test -> get_debug_string() << "\n";
    return 0;
}

