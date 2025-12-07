/*
Write a recursive function that counts the number of unique elements in the A array. An element is said unique if it appears only once in the array.
*/

#include <iostream>

using namespace std;

void printA(const int A[], int n){

    cout<<"A = { ";
    
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<"}"<<endl;

}

bool checkUniqueness(const int A[], int n, int elem){

    for(int i=0;i<n;i++)
        if(A[i]==A[elem] && i!=elem)
            return false;
   
    return true;

}

int countUniqueValues(const int A[], int n, int i){     // i must be initialized with n when the function is called, its aim is to iterate through the array.

    if(i==0)
        return 0;

    else
        return checkUniqueness(A,n,i-1) + countUniqueValues(A,n,i-1);

}

int main(int argc, char **argv){

    int *A;
    int n;

    cout<<"This program counts the number of unique elements in the A array."<<endl;

    if(argc!=1){

        n=argc-1;
        A = new int[n];

        for(int i=1;i<argc;i++)
            A[i-1]=stoi(argv[i]);

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

    cout<<"There are "<<countUniqueValues(A,n,n)<<" unique values in A."<<endl;

    delete[] A;
    return 0;

}
