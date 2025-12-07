#ifndef BST_TPP
#define BST_TPP

template <typename T>
BST<T>::~BST(){

    std::cout<<"Deleting BST..."<<std::endl;

    BST<T>::deleteSubtree(root);

}

template <typename T>
void BST<T>::deleteSubtree(Node<T> *node){
    
    if(node){

        deleteSubtree(node->getLeft());
        deleteSubtree(node->getRight());

        delete node;

    }

}

template <typename T>
void BST<T>::insert(const T value){

    Node<T> *newNode = new Node<T> (value);

    if(root==nullptr){
        
        root=newNode;
        return;
    
    }

    Node<T> *current = root;
    Node<T> *parent = nullptr;
    
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

#endif
