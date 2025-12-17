#ifndef ISBALANCED_H
#define ISBALANCED_H

#include "../../../lib/bst.h"
#include "../getHeight/getHeight.h"

/*
Write a recursive function that checks if a BST is balanced, which is if for each node, the difference between the two subtrees height is not greather than 1.
The function must return true or false.
*/

bool isBalanced(const Node *node){

    if(node==nullptr)
        return true;

    unsigned int leftHeight=0, rightHeight=0;

    //  since isBalanced() returns a bool, it needs a helper function to calculate the height for each node, so i used the getHeight() i already did in a past exercise
    leftHeight=getHeight(node->getLeft());
    rightHeight=getHeight(node->getRight());

    if(leftHeight>1+rightHeight || rightHeight>1+leftHeight)
        return false;

    return isBalanced(node->getLeft()) && isBalanced(node->getRight());

}

#endif
