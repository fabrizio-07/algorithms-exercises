#include <iostream>
#include "sumRange.h"

using namespace std;

int main(int argc, char **argv){

    BST tree;

    cout<<"This program sums all the nodes values of the BST, which are included in the range of bound a and b."<<endl;

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

    int a=0, b=0;

    cout<<"Insert the lower bound of the range:\t";
    cin>>a;
    
    cout<<"Insert the upper bound of the range:\t";
    cin>>b;

    while(a>b){

        cout<<"Upper bound must be greater than lower bound."<<endl;

        cout<<"Insert the lower bound of the range:\t";
        cin>>a;
      
        cout<<"Insert the upper bound of the range:\t";
        cin>>b;
        
    }

    cout<<"The sum of all the BST's nodes values greater or equal to "<<a<<" and lower or equal to "<<b<<" is:\t"<<sumRange(tree.getRoot(),a,b)<<endl;

    return 0;

}
