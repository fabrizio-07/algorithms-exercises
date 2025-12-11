#ifndef BST_H
#define BST_H

#include <iostream>

class Node{

private:
    int value;
    Node *left, *right, *parent;

public:
    Node(int newValue=0) : 
        value(newValue), left(nullptr), right(nullptr), parent(nullptr){}

    //  getters
    int getValue() const {return value;}
    Node *getLeft() const {return left;}
    Node *getRight() const {return right;}
    Node *getParent() const {return parent;}

    //  setters
    void setValue(const int newValue) {value = newValue;}
    void setLeft(Node *newLeft) {left = newLeft;}
    void setRight(Node *newRight) {right = newRight;}
    void setParent(Node *newParent) {parent = newParent;}

};

class BST{

private:
    Node *root;
    
    //  copy constructor and copy assignment operator are private to prevent those operations
    BST(const BST&);
    BST& operator=(const BST&);

    //  helper function for destructor
    void deleteSubtree(Node *);

    //  helper function for printTree
    void printTree(Node *);

public:
    BST(Node *newRoot=nullptr) : root(newRoot){std::cout<<"Creating BST..."<<std::endl;}
    ~BST();

    const Node *getRoot() const {return root;}

    //  generic bst functions
    void insert(const int);
    void printTree();

};

#endif
