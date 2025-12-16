#include <iostream>
#include "getMin.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program gets the min of the BST."<<endl;

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

    cout<<"The min value of the BST is:\t"<<getMin(tree.getRoot())<<endl;

    return 0;

}
