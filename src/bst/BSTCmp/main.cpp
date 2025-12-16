#include <iostream>
#include "BSTCmp.h"

using namespace std;

int main(int argc, char **argv){

    BST tree1, tree2;
    int dim1=0, dim2=0;

    cout<<"This program tells if two BSTs have the same structures."<<endl;

    cout<<"How many elements would you like to insert in the first BST?\t";
    cin>>dim1;

    while(dim1<1){

        cout<<"BSTs must have positive sizes. How many elements would you like to insert in the first BST?\t";
        cin>>dim1;

    }
    
    for(unsigned int i=0;i<dim1;i++){

        int val=0;

        cout<<"Insert the "<<i+1<<"th value of the first BST:\t";
        cin>>val;

        tree1.insert(val);
    
    }

    cout<<"First tree:\n";
    tree1.printTree();

    cout<<"How many elements would you like to insert in the second BST?\t";
    cin>>dim2;
  
    while(dim2<1){
 
        cout<<"BSTs must have positive sizes. How many elements would you like to insert in the second BST?\t";
        cin>>dim2;
  
    }

    for(unsigned int i=0;i<dim2;i++){

        int val=0;
 
        cout<<"Insert the "<<i+1<<"th value of the second BST:\t";
        cin>>val;
 
        tree2.insert(val);
 
     }

    cout<<"Second tree:\n";
    tree2.printTree();

    (BSTCmp(tree1.getRoot(),tree2.getRoot()) ? cout<<"BSTs have the same structures."<<endl : cout<<"BSTs have not the same structures."<<endl);

    return 0;

}
