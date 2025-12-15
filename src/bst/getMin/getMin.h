#ifndef GETMIN_H
#define GETMIN_H

#include "../../../lib/bst.h"
#include <climits>

/*
Write a recursive function that returns the minimum value stored in the BST.
*/

int getMin(const Node *node, int min=INT_MAX){

    if(node==nullptr)
        return min;

    else 
        return getMin(node->getLeft(),node->getValue());

}

#endif
