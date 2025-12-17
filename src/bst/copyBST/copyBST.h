#ifndef COPYBST_H
#define COPYBST_H

#include "../../../lib/bst.h"

/*
Write a recursive function that builds and returns an independent copy of a given BST.
*/

//  helper function which actually does the work
void copyFromRoot(const Node *node, BST &copy){

    if(node==nullptr)
        return;
        
    copy.insert(node->getValue());

    copyFromRoot(node->getLeft(), copy);
    copyFromRoot(node->getRight(), copy);

}

void copyBST(const BST &tree, BST &copy){

    std::cout<<"Copying your BST..."<<std::endl;

    copyFromRoot(tree.getRoot(), copy);
    
}

#endif
