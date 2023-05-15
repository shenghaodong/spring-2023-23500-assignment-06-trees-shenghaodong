#include <iostream>
#include "node.h"
#include "tree.h"
int main(){
    BSTree* test = new BSTree();
    test -> setup();
    std::cout << test -> get_debug_string() << "\n";
    std::cout << "Tree Height: " << test -> treeHeight() << "\n";
    std::cout << "Searching for: " << test -> searchr(20) << std::endl;
    std::cout << "Attempting to delete 20" << std::endl;
    test -> deleteNode(20);
    std::cout << test -> get_debug_string() << "\n";
    // std::cout << "Searching for: " << test -> searchr(15) << std::endl;
    // std::cout << "Attempting to delete 15" << std::endl;
    // test -> deleteNode(15);
    // std::cout << test -> get_debug_string() << "\n";

    // std::cout << "Searching for: " << test -> searchr(20) << std::endl;
    // std::cout << "Attempting to delete 20" << std::endl;
    // test -> deleteNode(20);
    // std::cout << test -> get_debug_string() << "\n";
    return 0;
}

