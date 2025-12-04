/*
Write a recursive function that counts the number of upper cases in the S string.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

unsigned long countUpperCases(const string &S, unsigned int i=0){
    
    if(i==S.length())
        return 0;

    else if(isupper(S[i]))
        return 1 + countUpperCases(S,i+1);

    else
        return countUpperCases(S,i+1);

}

int main(int argc, char **argv){

    string S="";

    cout<<"This program counts the number of upper cases in the S string."<<endl;

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

            cout<<"Insert the S string:\t";
            getline(cin,S);

        }

    }

    cout<<"S = {"<<S<<"}"<<endl;

    cout<<"S has "<<countUpperCases(S)<<" upper cases."<<endl;

    return 0;

}
