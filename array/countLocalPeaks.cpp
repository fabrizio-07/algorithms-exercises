/*
Write a recursive function that counts the number of local peaks of the A array, which are values so that A[i] > A[i-1] and A[i]>A[i+1].
*/

#include <iostream>

using namespace std;

void printA(int A[], int n){

    cout<<"A = { ";

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

unsigned long countLocalPeaks(int A[], int n){

    if(n<=2)
        return 0;

    else if(A[n-1]<A[n-2] && A[n-2]>A[n-3])
        return 1 + countLocalPeaks(A,n-1);

    else
        return countLocalPeaks(A,n-1);

}

int main(int argc, char **argv){

    int *A;
    int n=0;

    cout<<"This program counts the number of local peaks in the A array."<<endl;

    if(argc>3){

        n=argc-1;
        A = new int[n];

        for(int i=1;i<argc;i++)
            A[i-1]=stoi(argv[i]);

    }

    else{

        cout<<"How many numbers do you want to insert in A? A must contain at least 3 elements.\t";
        cin>>n;

        while(n<=2){

            cout<<"A length must be greater then 2. How many numbers do you want to insert in A?\t";
            cin>>n;

        }

        A = new int[n];

        for(int i=0;i<n;i++){
            cout<<"Insert the "<<i+1<<"th element of A:\t";
            cin>>A[i];
        }

    }

    printA(A,n);

    cout<<"The number of local peaks in A is:\t"<<countLocalPeaks(A,n)<<endl;

    delete[] A;
    return 0;

}
