#ifndef SUMRANGE_H
#define SUMRANGE_H

#include "../../../lib/bst.h"

/*
Write a recursive function that sums all the nodes values of a BST, which are included between the bounds a and b.
*/

int sumRange(const Node *node, const int a, const int b){

    if(node==nullptr)
        return 0;

    else if(node->getValue()>b)
        return sumRange(node->getLeft(),a,b);

    else if(node->getValue()<a)
        return sumRange(node->getRight(),a,b);

    else
        return node->getValue() + sumRange(node->getLeft(),a,b) + sumRange(node->getRight(),a,b);

}

#endif
