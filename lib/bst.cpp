#include "bst.h"

BST::~BST(){

    std::cout<<"Deleting BST..."<<std::endl;

    BST::deleteSubtree(root);

}

void BST::deleteSubtree(Node *node){
    
    if(node){

        deleteSubtree(node->getLeft());
        deleteSubtree(node->getRight());

        delete node;

    }

}

void BST::insert(const int value){

    Node *newNode = new Node (value);

    if(root==nullptr){
        
        root=newNode;
        return;
    
    }

    Node *current = root;
    Node *parent = nullptr;
    
    while(current!=nullptr){

        parent=current;

        if(value<=current->getValue())
            current=current->getLeft();

        else
            current=current->getRight();

    }

    newNode->setParent(parent);

    if(value<=parent->getValue())
        parent->setLeft(newNode);

    else
        parent->setRight(newNode);

}

void BST::printTree(Node *node){    
    
    if(node){

        std::cout<<node->getValue()<<" ";

        printTree(node->getLeft());
        printTree(node->getRight());

    }

}

void BST::printTree(){

    std::cout<<"BST = { ";

    printTree(root);

    std::cout<<"}   (preorder visit)"<<std::endl;

}
