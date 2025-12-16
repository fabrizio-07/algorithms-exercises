#include <iostream>
#include "sumLevelNodes.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program returns the sum of all the nodes values of a given L level of the BST."<<endl; 

    if(argc>1){

        for(unsigned int i=1;i<argc;i++){

            cout<<"Inserting the "<<i<<"th element in the BST."<<endl;
            tree.insert(stoi(argv[i]));

        }

    }

    else{

        unsigned int dim=0;

        cout<<"How many elements would you like to insert in the BST?\t";
        cin>>dim;

        while(dim<1){

            cout<<"BST size must be positive. How many elements would you like to insert in the BST?\t";
            cin>>dim;

        }

        for(unsigned int i=0;i<dim;i++){

            int val=0;

            cout<<"Insert the "<<i+1<<"th element of the BST:\t";
            cin>>val;

            tree.insert(val);

        }

    }

    tree.printTree();

    int l=0;

    cout<<"Insert the L level:\t";
    cin>>l;

    while(l<0){

        cout<<"The level cannot be negative. Insert the L level:\t";
        cin>>l;

    }
    
    cout<<"The sum of the nodes in the "<<l<<" level is:\t"<<sumLevelNodes(tree.getRoot(),l)<<endl;

    return 0;

}
