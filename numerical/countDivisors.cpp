/*
Write a recursive function that counts the number of positive integers that divide exactely a given number n.
*/

#include <iostream>

using namespace std;

unsigned long countDivisors(int n, int d){

    if(d==n)
        return 1;

    else if(n%d!=0)
        return countDivisors(n,d+1);

    else
        return 1 + countDivisors(n,d+1);

}

int main(int argc, char **argv){

    int n=0,d=0;

    cout<<"This program counts the divisors of a number."<<endl;

    if(argc==2)
        n=stoi(argv[1]);

    else{

        cout<<"Insert a number:\t";
        cin>>n;

    }

    cout<<n<<" has "<<countDivisors(n,1)<<" divisors."<<endl;

    return 0;

}
