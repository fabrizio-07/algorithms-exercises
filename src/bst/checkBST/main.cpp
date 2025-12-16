#include <iostream>
#include "checkBST.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program verifies if the elements of the BST, follow the ordering progrerties of BSTs."<<endl;

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

            cout<<"BST dimension must be positive. How many elements would you like to insert in the BST?\t";
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

    (checkBST(tree.getRoot()) ? cout<<"This binary tree is a BST."<<endl : cout<<"This binary tree is not a BST."<<endl);

    return 0;

}
