#ifndef GETHEIGHT_H
#define GETHEIGHT_H

#include "../../../lib/bst.h"
#include <algorithm>

/*
Write a recursive function that calculates the height of a BST, which is the longest path length from the root to a leaf. 
*/

unsigned int getHeight(const Node *node){

    if(node==nullptr)
        return 0;

    else
        return 1 + std::max(getHeight(node->getLeft()),getHeight(node->getRight()));

}

#endif
