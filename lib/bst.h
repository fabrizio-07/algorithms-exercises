#ifndef BST_H
#define BST_H

#include <iostream>

template <typename T>
class Node{

private:
    T value;
    Node<T> *left, *right, *parent;

public:
    Node(T newValue=T()) : 
        value(newValue), left(nullptr), right(nullptr), parent(nullptr){}

    //  getters
    T getValue() const {return value;}
    Node<T> * getLeft() const {return left;}
    Node<T> * getRight() const {return right;}
    Node<T> * getParent() const {return parent;}

    //  setters
    void setValue(const T newValue) {value = newValue;}
    void setLeft(Node<T> * newLeft) {left = newLeft;}
    void setRight(Node<T> * newRight) {right = newRight;}
    void setParent(Node<T> * newParent) {parent = newParent;}

};

template <typename T>
class BST{

private:
    Node<T> *root;
    
    //  copy constructor and copy assignment operator are private to prevent those operations
    BST(const BST&);
    BST& operator=(const BST&);

    //  helper function for destructor
    void deleteSubtree(Node<T> *);

public:
    BST(Node<T> * newRoot=nullptr) : root(newRoot){std::cout<<"Creating BST..."<<std::endl;}
    ~BST();

    const Node<T> *getRoot() const {return root;}

    void insert(const T);

};

#include "bst.tpp"
#endif
