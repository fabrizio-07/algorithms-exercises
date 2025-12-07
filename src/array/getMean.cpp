/*
Write a recursive function that calculates the arithmetic mean of the elements of the A array, with n numbers.
*/

#include <iostream>

using namespace std;

void printA(const int A[], int n){

    cout<<"A = { ";

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

float getMean(const int A[], int n){

    if(n==0)
        return 0;

    else
        return ((A[n-1] + (getMean(A,n-1)*(n-1)))/n);

}

int main(int argc, char **argv){

    int *A;
    int n;

    cout<<"This program calculates the arithmetic mean of the A array."<<endl;

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

    cout<<"The arithmetic mean of the numbers in A is: "<<getMean(A,n)<<endl;

    delete[] A;
    return 0;

}
