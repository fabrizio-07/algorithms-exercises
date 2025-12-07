/*
Write a recursive function that counts the number of words in the S string, assuming that the words are separated by a single space.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

unsigned long countWords(const string &S, unsigned int i=0){

    if(S.empty())
        return 0;

    else if(i>=S.length())
        return 1;
    
    else if(isspace(S[i]))
        return 1 + countWords(S,i+1);

    else
        return countWords(S,i+1);

}

int main(int argc, char **argv){

    string S="";

    cout<<"This program counts the number of words in the S string."<<endl;

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

    cout<<"There are "<<countWords(S)<<" words in S."<<endl;

    return 0;

}
