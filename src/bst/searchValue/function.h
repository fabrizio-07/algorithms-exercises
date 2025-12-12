#ifndef SEARCHVALUE_H
#define SEARCHVALUE_H

#include "../../../lib/bst.h"

/*
Write a recursive function that tells if the x value is in the BST. The function must return true or false.
*/

bool searchValue(const Node *node, const int element){

    if(node==nullptr)
        return false;

    else if(node->getValue()==element)
        return true;
    
    //  exploiting the bst order rule to look for the element only in the branch where the element should be, comparing its value with the node
    else if(node->getValue()>element)
        return searchValue(node->getLeft(),element);

    else
        return searchValue(node->getRight(),element);

}

#endif
