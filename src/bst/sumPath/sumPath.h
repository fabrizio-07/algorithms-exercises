#ifndef SUMPATH_H
#define SUMPATH_H

#include "../../../lib/bst.h"

/*
Write a recursive function that verifies if exists a path from the root to a leaf, which the sum of its nodes values is equal to a given value K.
The function must return true or false.
*/

bool sumPath(const Node* node, const int k, int sum=0){

    if(node==nullptr)
        return false;

    sum+=node->getValue();

    if(node->getLeft()==nullptr && node->getRight()==nullptr)
        return (sum==k);

    else
        return sumPath(node->getLeft(),k,sum) || sumPath(node->getRight(),k,sum);
         
}

#endif
