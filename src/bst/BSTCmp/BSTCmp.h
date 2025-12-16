#ifndef BSTCMP_H
#define BSTCMP_H

#include "../../../lib/bst.h"

/*
Write a recursive function that tells if two BSTs have the same structures (indipendently by their values).
The function must returns true if the trees nodes are placed in the same way.
*/

bool BSTCmp(const Node *node1, const Node *node2){

    if(node1==nullptr && node2==nullptr)
        return true;

    else if((node1==nullptr && node2!=nullptr) || (node1!=nullptr && node2==nullptr))
        return false;

    else if(node1->getLeft()==nullptr && node2->getLeft()==nullptr)
        return BSTCmp(node1->getRight(), node2->getRight());

    else if(node1->getRight()==nullptr && node2->getRight()==nullptr)
        return BSTCmp(node1->getLeft(), node2->getLeft());

    else if((node1->getRight()==nullptr && node2->getRight()!=nullptr) || (node1->getRight()!=nullptr && node2->getRight()==nullptr))
        return false;

    else if((node1->getLeft()==nullptr && node2->getLeft()!=nullptr) || (node1->getLeft()!=nullptr && node2->getLeft()==nullptr))
        return false;

    else
        return BSTCmp(node1->getLeft(), node2->getLeft()) && BSTCmp(node1->getRight(), node2->getRight());

}

#endif
