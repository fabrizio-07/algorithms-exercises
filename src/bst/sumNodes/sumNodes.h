#ifndef SUMNODES_H
#define SUMNODES_H

#include "../../../lib/bst.h"

/*
Write a recursive function that calculates the sum of all the numerical values contained in the nodes of a BST.
*/

unsigned long sumNodes(const Node *node){

    if(node==nullptr)
        return 0;

    else
        return node->getValue() + sumNodes(node->getLeft()) + sumNodes(node->getRight());

}

#endif
