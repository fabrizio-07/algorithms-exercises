/*
Write a recursive function that counts the number of vowels (a,e,i,o,u) in the S string.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

unsigned long countVowels(const string &S, unsigned int i=0){

    if(S[i]=='\0')
        return 0;

    switch(tolower(S[i])){

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1 + countVowels(S,i+1);
        default:
            return countVowels(S,i+1);

    }

}

int main(int argc, char **argv){

    string S="";

    cout<<"This program counts the number of vowels in the S string."<<endl;

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

            cout<<"S cannot be empty. Insert the S string:\t";
            getline(cin,S);

        } 

    }

    cout<<"S = {"<<S<<"}"<<endl;

    cout<<"S has "<<countVowels(S)<<" vowels."<<endl;

    return 0;

}
