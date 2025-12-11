#ifndef COUNTNODES_H
#define COUNTNODES_H

#include "../../../lib/bst.h"

/*
Write a recursive function that returns the number of nodes in a binary search tree.
*/

unsigned int countNodes(const Node *node){

    if(node==nullptr)
        return 0;

    else
        return 1 + countNodes(node->getLeft()) + countNodes(node->getRight());

}

#endif
