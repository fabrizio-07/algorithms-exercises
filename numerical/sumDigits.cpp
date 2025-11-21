/*
Somma delle cifre di un numero. Scrivere una funzione ricorsiva che calcoli la somma delle cifre di un numero intero positivo n.
*/
#include <iostream>

using namespace std;

unsigned int sumDigits(int n){

    if(n==0)
        return 0;

    else
        return n%10+sumDigits(n/10); 

}

int main(int argc, char **argv){

    int n=0;

    cout<<"This program sums the digits of a number."<<endl;

    if(argc==2)
        n=stoi(argv[1]);
    
    else{

        cout<<"Insert a number:\t";
        cin>>n;

        while(n<=0){
            cout<<"The number must be a positive one. Insert a number:\t";
            cin>>n;
        }

    }

    cout<<"The sum of the digits in "<<n<<" is:\t"<<sumDigits(n)<<endl;

    return 0;

}
