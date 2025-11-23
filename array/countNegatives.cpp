/*
Write a recursive function that counts the number of negatives numbers of the A array, which has n elements.
*/

#include <iostream>

using namespace std;

void printA(const int A[], int n){

    cout<<"A = { ";

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

unsigned short countNegatives(int A[], int n){

    if(n==0)
        return 0;

    else if(A[n-1]>=0)
        return countNegatives(A,n-1);

    else
        return 1 + countNegatives(A,n-1);

}

int main(int argc, char **argv){

    int *A;
    int n=0;

    cout<<"This program counts the number of negative elements of an array."<<endl;

    if(argc!=1){

        n=argc-1;
        A = new int[n];

        for(int i=1;i<argc;i++)
            A[i-1]=stoi(argv[i]);

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
            cout<<"Insert the "<<i+1<<"th number:\t";
            cin>>A[i];
        }

    }

    printA(A,n);

    cout<<"There are "<<countNegatives(A,n)<<" negative numbers in A."<<endl;

    delete[] A;
    return 0;

}
