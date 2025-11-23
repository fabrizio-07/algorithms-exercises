/*
Write a recursive function which tells if the A array of n elements is symmetric with respect to its center; that is, if A[i] = A[n - 1 - i] for every i. The function must return true or false.
*/

#include <iostream>

using namespace std;

void printA(const int A[], int n){

    cout<<"A = { ";
    
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

bool checkSymmetry(int A[], int start, int n){

     if(n==0)
        return true;

     else if(A[n-1]!=A[start])
        return false;

     else
        return checkSymmetry(A,start+1,n-1);

}

int main(int argc, char **argv){

    int *A;
    int n;

    cout<<"This program tells if the A array is symmetric with respect to its center."<<endl;

    if(argc!=1){

        n=argc-1;
        A = new int[n];

        for(int i=0;i<n;i++)
            A[i]=stoi(argv[i+1]);

    }

    else{

        cout<<"How many numbers do you want to insert in A?\t";
        cin>>n;

        while(n<=0){

            cout<<"A length must be positive. How many numbers do you want to insert in A?\t";
            cin>>n;

        }

        A = new int[n];

        for(int i=0;i<n;i++){

            cout<<"Insert the "<<i+1<<"th element of A:\t";
            cin>>A[i];

        }

    }

    printA(A,n);
    
    (checkSymmetry(A,0,n) ? cout<<"A is symmetric."<<endl :  cout<<"A is not symmetric."<<endl);

    delete[] A;
    return 0;

}
