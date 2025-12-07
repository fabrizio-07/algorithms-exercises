/*
Write a recursive function that, given the S string, returns the total number of its characters.
*/

#include <iostream>
#include <string>

using namespace std;

unsigned long getLength(const string &S, unsigned int i=0){

    if(i>=S.length())
        return 0;

    else
        return 1 + getLength(S,i+1);

}

int main(int argc, char **argv){

    string S="";
    
    cout<<"This program prints the the total number of characters of the S string."<<endl;

    if(argc>1){

        for(unsigned int i=1;i<argc;i++){

            S.append(argv[i]);
            S.append(" ");

        }

        S.pop_back();

    }

    else{

        cout<<"Insert the S string:\t";
        getline(cin,S);
    
        while(S.empty()){

            cout<<"The string cannot be emtpy. Insert the S string:\t";
            getline(cin,S);

        }

    }

    cout<<"S = {"<<S<<"}"<<endl;

    cout<<"The number of character in S is:\t"<<getLength(S);

    return 0;

}
