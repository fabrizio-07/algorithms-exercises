/*
Write a recursive function that checks if is there, in the A array, any sequence of at least three consecutive elements in strictly increasing order. The function must return true or false.
*/

#include <iostream>

using namespace std;

void printA(const int A[], int n){

    cout<<"A = { ";

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

bool checkIncreasingSequence(const int A[], int n){

    if(n<=2)
        return false;

    else if(A[n-1]>A[n-2] && A[n-2]>A[n-3])
        return true;

    else
        return checkIncreasingSequence(A,n-1);

}

int main(int argc, char **argv){

    int *A;
    int n;

    cout<<"This program checks if the A array contains a strictly increasing sequence of at least 3 elements."<<endl;

    if(argc!=1){

        n=argc-1;
        A = new int[n];

        for(int i=0;i<n;i++)
            A[i]=stoi(argv[i+1]);

    }

    else{

        cout<<"How many elements do you want to insert in A?\t";
        cin>>n;

        while(n<=0){

            cout<<"A length must be positive. How many elements do you want to insert in A?\t";
            cin>>n;
    
        }

        A = new int[n];

        for(int i=0;i<n;i++){

            cout<<"Insert the "<<i+1<<"th element:\t";
            cin>>A[i];

        }

    }

    printA(A,n);

    (checkIncreasingSequence(A,n) ? cout<<"There is a strictly increasing sequence in A."<<endl : cout<<"There is no strictly increasing sequence in A."<<endl);

    delete[] A;
    return 0;

}
