#pragma once
#include <iostream>
#include <stdio.h>
#include "node.h"

class BSTree{
 private:
  Node *root;
  std::string traverse(Node *n);

public:
  BSTree();

  void setup();

  std::string get_debug_string();
  

  
  int search(int value);
  void insert(int value);

  int treesum();
  int treesum(Node *n);
  int countodds();
  int countodds(Node *n);
  int oddsum();
  int oddsum(Node *n);
  int searchr(int value);
  int searchr(int value, Node *n);
  bool deleteNode(int value);
  int treeHeight();
  int treeHeight(Node *getHeight);
  bool isCousin(int a, int b);
  //std::string checkChild(int n);
  //void insertr(int n);
  
};