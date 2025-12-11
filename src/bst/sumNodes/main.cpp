#include <iostream>
#include "function.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program sums all the numerical values of the BST."<<endl;

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

            cout<<"The BST dimension cannot be negative. How many elements would you like to insert in the BST?\t";
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

    cout<<"The sum of all the BST's nodes numerical values is:\t"<<sumNodes(tree.getRoot())<<endl;

    return 0;

}
