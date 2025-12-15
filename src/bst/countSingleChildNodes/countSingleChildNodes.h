#ifndef COUNTSINGLECHILDNODES_H
#define COUNTSINGLECHILDNODES_H

#include "../../../lib/bst.h"

/*
Write a recursive function that counts the number of nodes of the BST that have exactly one child not empty.
*/

unsigned int countSingleChildNodes(const Node *node){

    if(node==nullptr)
        return 0;

    else if(node->getLeft()==nullptr && node->getRight()!=nullptr)
        return 1 + countSingleChildNodes(node->getRight());

    else if(node->getLeft()!=nullptr && node->getRight()==nullptr)
        return 1 + countSingleChildNodes(node->getLeft());

    else
        return countSingleChildNodes(node->getLeft()) + countSingleChildNodes(node->getRight());

}

#endif
