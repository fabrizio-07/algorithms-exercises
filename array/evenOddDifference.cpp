/*
Write a recursive function that calculates the difference between the sum of even numbers and the sum of the odd ones in the A array of n elements.
*/

#include <iostream>

using namespace std;

void printA(const int A[], int n){

    cout<<"A = { ";
    
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

long evenOddDifference(int A[], int n){

    if(n==0)
        return 0;

    else if(A[n-1]%2!=0)
        return evenOddDifference(A,n-1) - A[n-1];
        
    else
        return A[n-1] + evenOddDifference(A,n-1);

}

int main(int argc, char **argv){

    int n;
    int *A;

    cout<<"This program prints the difference between the sum of the even numbers and the one of the odd numbers in the A array."<<endl;

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
            
            cout<<"Insert the "<<i+1<<"th number:\t";
            cin>>A[i];

        }

    }

    printA(A,n);

    cout<<"The difference between the sum of even numbers in A and the sum of its odd numbers is:\t"<<evenOddDifference(A,n)<<endl;

    delete[] A;
    return 0;

}
