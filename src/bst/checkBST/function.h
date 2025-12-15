#ifndef CHECKBST_H
#define CHECKBST_H

#include "../../../lib/bst.h"
#include <climits>

/*
Write a recursive function that verifies if a generical binary tree respects the properties of a BST.
The function must return true if, for each v node, all the values in the left subtree are less or equal than v, and all the ones in the right subtree are greater than v.
*/

//  this function will return always true as i'm using the bst in the /lib folder, which inserts elements as a BST should do.
bool checkBST(const Node *node, int min=INT_MIN, int max=INT_MAX){

    if(node==nullptr)
        return true;

    else if(node->getValue()<=min || node->getValue()>max)
        return false;

    else
        return checkBST(node->getLeft(),min,node->getValue()) && checkBST(node->getRight(),node->getValue(),max);

}

#endif
