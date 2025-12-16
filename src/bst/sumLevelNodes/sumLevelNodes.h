#ifndef SUMLEVELNODES_H
#define SUMLEVELNODES_H

#include "../../../lib/bst.h"

/*
Write a recursive function that sums the values of all the nodes in a given L level.
The root level is 0.
*/

int sumLevelNodes(const Node *node, const unsigned int l){

    if(node==nullptr)
        return 0;

    else if(l==0)
        return node->getValue();

    else
        return sumLevelNodes(node->getLeft(),l-1) + sumLevelNodes(node->getRight(),l-1);

}

#endif
