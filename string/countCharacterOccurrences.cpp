/*
Write a recursive function that counts the times a c character occurs inside a S string.
*/

#include <iostream>
#include <string>

using namespace std;

unsigned long countCharacterOccurrences(const string &S, const char c, unsigned int i=0){

    if(S[i]=='\0')
        return 0;

    else if(S[i]==c)
        return 1 + countCharacterOccurrences(S,c,i+1);

    else
        return countCharacterOccurrences(S,c,i+1);

}

int main(int argc, char **argv){

    string S="", C="";
    char c;

    cout<<"This program counts the times a c character occurs inside a S string."<<endl;

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

            cout<<"The string cannot be empty. Insert the S string:\t";
            getline(cin,S);

        }

    }

    cout<<"S = {"<<S<<"}"<<endl;

    cout<<"Insert the c character:\t";
    getline(cin,C);

    while(C.empty() || C.length() != 1){

        cout<<"c cannot be empty or more than one chacacter. Insert the c character:\t";
        getline(cin,C);

    }
    
    c=C[0];

    cout<<"c = {"<<c<<"}"<<endl;

    cout<<"The "<<c<<" character occurs "<<countCharacterOccurrences(S,c)<<" times."<<endl;

    return 0;

}
