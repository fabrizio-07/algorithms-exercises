/*
Write a recursive function that calculates the multiplication of the first n odd positive numbers.
*/

#include <iostream>

using namespace std;

unsigned long oddMultiply(int n){

    if(n==1)
        return 1;

    else
        return ((2*n)-1)*oddMultiply(n-1);

}

int main(int argc, char **argv){

    int n=0;

    cout<<"The program multiply the first n odd numbers."<<endl;
    
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

    cout<<"The multiplication of the first "<<n<<" odd numbers is: "<<oddMultiply(n)<<endl;

    return 0;

}
