#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "node.h"
#include "tree.h"

// Tests
TEST_CASE("search and deletion"){
    BSTree* testA = new BSTree();
    testA -> setup();
    CHECK(testA -> searchr(30) == 30);
    CHECK(testA -> searchr(20) == 20);
    CHECK(testA -> searchr(15) == 15);
    CHECK(testA -> searchr(7) == -1);
    CHECK(testA -> searchr(39) == -1);
    testA -> deleteNode(20);
    CHECK(testA -> searchr(20) == -1);
    testA -> deleteNode(10);
    CHECK(testA -> searchr(10) == -1);
};

TEST_CASE("height + cousin"){
    BSTree* testB = new BSTree();
    testB -> setup();
    CHECK(testB -> treeHeight() == 2);
    CHECK(testB -> isCousin(5, 20) == true);
    CHECK(testB -> isCousin(3, 8) == true);
    CHECK(testB -> isCousin(10, 5) == false);
    CHECK(testB -> isCousin(15, 10) == false);
    CHECK(testB -> isCousin(30, 20) == false);
    CHECK(testB -> isCousin(5, 8) == false);
};