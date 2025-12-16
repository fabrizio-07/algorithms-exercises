#include <iostream>
#include "sumPath.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This programs checks if is there any path of the BST, from the root to a leaf, which the sum of all the nodes in that path is equal to the K value."<<endl;

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

            cout<<"BST size cannot be less than one. How many elements would you like to insert in the BST?\t";
            cin>>dim;

        }

        for(unsigned int i=0;i<dim;i++){

            int val=0;

            cout<<"Insert the "<<i+1<<"th element of the BST:\t";
            cin>>val;

            tree.insert(val);

        }

    }

    int k=0;

    cout<<"Insert the K value:\t";
    cin>>k;

    tree.printTree();

    (sumPath(tree.getRoot(),k) ? cout<<"There is a path which the sum of its nodes is egual to "<<k<<endl : cout<<"There is no path which the sum of its nodes is egual to "<<k<<endl);

    return 0;

}
