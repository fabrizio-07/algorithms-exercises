#include <iostream>
#include "getMax.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program returns the max value stored in the BST."<<endl;

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
    
            cout<<"BST cannot have negative dimension. How many element would you like to insert in the BST?\t";
            cin>>dim;

        }

        for(unsigned int i=0;i<dim;i++){

            int val=0;

            cout<<"Insert the "<<i+1<<"th value of the BST:\t";
            cin>>val;

            tree.insert(val);

        }

    }

    tree.printTree();

    cout<<"The maximum value stored in the BST is:\t"<<getMax(tree.getRoot())<<endl;

    return 0;

}
