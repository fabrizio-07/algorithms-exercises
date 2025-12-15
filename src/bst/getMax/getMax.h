#ifndef GETMAX_H
#define GETMAX_H

#include "../../../lib/bst.h"
#include <climits>

/*
Write a recursive function that returns the maximum value stored in the BST.
*/

int getMax(const Node *node, int max=INT_MIN){

    if(node==nullptr)
        return max;

    else
        return getMax(node->getRight(),node->getValue());

}

#endif
