/*
Scrivere una funzione ricorsiva che calcoli la somma dei primi n numeri dispari positivi.
*/

#include <iostream>

using namespace std;

unsigned int oddSum(int n){

    if(n==0)
        return 0;

    else
        return (2*n)-1+oddSum(n-1);

}

int main(int argc, char **argv){

	int n=0;

	cout<<"This program prints the sum of the first n odd numbers."<<endl;
    
    if(argc==2){
        n=stoi(argv[1]);
    }

    else{
        
        cout<<"Insert n:\t";
	    cin>>n;

	    while(n<=0){
		    cout<<"n must be greater than 0, please insert a valid number:\t";
		    cin>>n;
	    }

    }

	cout<<"The sum of the first "<<n<<" odd numbers is equal to:\t"<<oddSum(n)<<endl;

	return 0;

}
