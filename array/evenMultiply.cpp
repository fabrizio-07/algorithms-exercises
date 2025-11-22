/*
Write a recursive function that multiply all the even elements of the A array, with n numbers. If there are no even elements in A, the function must return 1.
*/

#include <iostream>

using namespace std;

void printA(int A[], int n){

    cout<<"A = { ";

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

unsigned long evenMultiply(int A[], int n){

    if(n==0)
        return 1;

    else if(A[n-1]%2!=0)
        return evenMultiply(A,n-1);

    else
        return A[n-1] * evenMultiply(A,n-1);

}   

int main(int argc, char **argv){

    int *A;
    int n=0;

    cout<<"This program multiplies the even elements of the A array, or returns 1 if there are no even elements in A."<<endl;

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
            cout<<"Insert the "<<i+1<<"th element of A:\t";
            cin>>A[i];
        }

    }

    printA(A,n);

    cout<<"The multiplication of the even numbers in A is:\t"<<evenMultiply(A,n)<<endl;

    delete[] A;
    return 0;

}
