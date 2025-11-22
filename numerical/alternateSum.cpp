/*
Write a recursive function that calculates the alternated sum of the first n positive numbers:
S(n) = 1 - 2 + 3 - 4 + 5 - 6 + .. ±n .
*/

#include <iostream>

using namespace std;

long alternateSum(int n){

    if(n==0)
        return 0;

    else if(n%2==0)
        return alternateSum(n-1) - n;

    else
        return n + alternateSum(n-1);

}

int main(int argc, char **argv){

    int n=0;

    cout<<"This program compute the alternated sum of the first n positive numbers."<<endl;

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

    cout<<"The alternated sum of the first "<<n<<" numbers is: "<<alternateSum(n)<<endl;

    return 0;

}
