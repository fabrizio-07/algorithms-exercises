#ifndef COUNTLEAVES_H
#define COUNTLEAVES_H

#include "../../../lib/bst.h"

/*
Write a recursive function that counts the number of leaf nodes (nodes without sons) are in the BST.
*/

unsigned int countLeaves(const Node *node){

    if(node==nullptr)
        return 0;

    else if(node->getLeft()==nullptr && node->getRight()==nullptr)
        return 1;

    else
        return countLeaves(node->getLeft()) + countLeaves(node->getRight());

}

#endif
