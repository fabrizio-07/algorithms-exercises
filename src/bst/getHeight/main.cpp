#include <iostream>
#include "function.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program gets the height of the BST."<<endl;

    if(argc>1){

        for(unsigned int i=1;i<argc;i++){

            cout<<"Inserting the "<<i<<"th element."<<endl;
            tree.insert(stoi(argv[i]));

        }

    }

    else{

        unsigned int dim=0;

        cout<<"How many elements would you like to insert in the BST?\t";
        cin>>dim;

        while(dim<1){

            cout<<"The BST dimension must be positive. How many elements would you like to insert in the BST?\t";
            cin>>dim;

        }

        for(unsigned int i=0;i<dim;i++){

            int val=0;

            cout<<"Insert the "<<i+1<<"th element:\t";
            cin>>val;

            tree.insert(val);

        }

    }

    tree.printTree();

    cout<<"The BST's height is:\t"<<getHeight(tree.getRoot())<<endl;

    return 0;

}
