/*
Massimo comune divisore (MCD). Scrivere una funzione ricorsiva che calcoli il massimo comune divisore tra due numeri interi positivi a e b.
*/

#include <iostream>

using namespace std;

long gcd(int a, int b){
    
    if(b==0)
        return a;

    else
        return gcd(b,a%b);        

}

int main(int argc, char **argv){

    int a=0,b=0;
    
    cout<<"The aim of this program is to calculate the greatest common divisor between two positive numbers."<<endl;

    if(argc==3){
        a=stoi(argv[1]);
        b=stoi(argv[2]); 
    }
    
    else{

        cout<<"Insert the first number:\t";
        cin>>a;

        while(a<=0){
            cout<<"The number must be positive. Insert the first number:\t";
            cin>>a;
        }

        cout<<"Insert the second number:\t";
        cin>>b;

        while(b<=0){
            cout<<"The number must be positive. Insert the second number:\t";
            cin>>b;
        }

    }

    cout<<"The greatest common divisor between "<<a<<" and "<<b<<" is:\t"<<gcd(a,b)<<endl;

    return 0;

}
