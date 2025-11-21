/*
Conteggio delle cifre di un numero. Scrivere una funzione ricorsiva che, dato un numero intero positivo n, restituisca il numero di cifre che lo compongono.
*/

#include <iostream>

using namespace std;

unsigned short digitsCount(int n){

    if(n==0)
        return 0;

    else
        return digitsCount(n/10)+1;

}

int main(int argc, char **argv){

    int n=0;

    cout<<"The aim of this program is to tell the number of digits in a given number."<<endl;
    
    if(argc==2)
        n=stoi(argv[1]);

    else{

        cout<<"Insert a number:\t";
        cin>>n;

        while(n<=0){
            cout<<"The number must be positive. Insert a number:\t";
            cin>>n;
        }

    }

    cout<<"The number of digits contained in the number "<<n<<" is:\t"<<digitsCount(n)<<endl;

    return 0;

}
