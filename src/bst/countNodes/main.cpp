#include <iostream>
#include "../../../lib/bst.h"
#include "function.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program counts the number of nodes in the BST."<<endl;

    if(argc>1){

        for(unsigned int i=1;i<argc;i++){

            cout<<"Inserting the "<<i<<"th element in the BST"<<endl;
            tree.insert(stoi(argv[i]));

        }

    }

    else{

        unsigned int n=0;

        cout<<"How many elements would you like to insert in the BST?\t";
        cin>>n;

        while(n<1){

            cout<<"The BST dimension cannot be negative. How many elements would you like to insert in the BST?\t";
            cin>>n;

        }

        for(unsigned int i=0;i<n;i++){

            int val=0;

            cout<<"Insert the "<<i+1<<"th element of the BST."<<endl;
            cin>>val;

            tree.insert(val);
    
        }

    }

    tree.printTree();

    cout<<"The BST has "<<countNodes(tree.getRoot())<<" nodes."<<endl;

    return 0;

}
