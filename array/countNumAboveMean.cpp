/*
Write a recursive function that counts how many elements, of an array A of length n, have a value greater than the arithmetic mean of the array itself.
*/

#include <iostream>

using namespace std;

float getMean(int A[], int n){
    
    float mean=0;

    for(int i=0;i<n;i++)
        mean+=A[i];

    return mean/n;

}

void printA(int A[], int n, float mean){

    cout<<"A = { ";

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}, mean = "<<mean<<endl;

}

unsigned long countNumAboveMean(int A[], int n, float mean){
    
    if(n==0)
        return 0;

    else if(A[n-1]>mean)
        return 1 + countNumAboveMean(A,n-1,mean);

    else
        return countNumAboveMean(A,n-1,mean);

}

int main(int argc, char **argv){

    int *A;
    int n=0;
    float mean=0;

    cout<<"This program counts the number of elements of A array, which are greater than the arithmetic mean of the A."<<endl;

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

            cout<<"The length of A cannot be negative. How many numbers do you want to insert in A?\t";
            cin>>n;

        }

        A = new int[n];

        for(int i=0;i<n;i++){
            cout<<"Insert the "<<i+1<<"th number:\t";
            cin>>A[i];
        }

    }

    mean=getMean(A,n);

    printA(A,n,mean);

    cout<<"There are "<<countNumAboveMean(A,n,mean)<<" numbers in A greater than A mean, which is:\t"<<mean<<endl;

    delete[] A;
    return 0;

}
