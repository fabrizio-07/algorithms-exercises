#include <iostream>
#include "isBalanced.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program checks if a BST is balanced."<<endl;

    if(argc>1){

        for(unsigned int i=1;i<argc;i++){

            cout<<"Inserting the "<<i<<"th element in the BST."<<endl;
            tree.insert(stoi(argv[i]));

        }

    }

    else{

        int dim=0;

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

    (isBalanced(tree.getRoot()) ? cout<<"The BST is balanced"<<endl : cout<<"The BST is not balanced."<<endl);

    return 0;

}
