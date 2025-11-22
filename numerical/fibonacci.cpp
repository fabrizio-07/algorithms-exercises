/*
Write a recursive function that calculates the n-th number of the Fibonacci's sequence.
*/

#include <iostream>

using namespace std;

unsigned long fibonacci(int n){

    if(n==0)
        return 0;

    else if(n==1)
        return n + fibonacci(n-1);

    else
        return fibonacci(n-1) + fibonacci(n-2);

}

int main(int argc, char **argv){

    int n=0;

    cout<<"This program prints the n-th number of the Fibonacci sequence."<<endl;

    if(argc==2)
        n=stoi(argv[1]);

    else{

        cout<<"Insert a positive number:\t";
        cin>>n;

        while(n<=0){

            cout<<"The number must be positive. Insert a positive number:\t";
            cin>>n;

        }

    }

    cout<<"The "<<n<<"th number of the Fibonacci sequence is: "<<fibonacci(n)<<endl;

    return 0;

}
