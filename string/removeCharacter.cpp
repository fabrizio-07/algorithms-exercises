/*
Write a recursive function that removes all the occurrences of the c character from the S string and returns the new resultant S.
*/

#include <iostream>
#include <string>

using namespace std;

string removeCharacter(string &S, const char c, unsigned int i=0){

    if(S[i]=='\0')
        return S;

    else if(S[i]==c){

        S.erase(i,1);
        return removeCharacter(S,c,i);

    }

    else
        return removeCharacter(S,c,i+1);

}

int main(int argc, char **argv){

    string S="", C="";
    char c;

    cout<<"This program removes all the occurrences of the c character from the S string."<<endl;

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

    cout<<"Insert the c character:\t";
    getline(cin,C);

    while(C.empty() || C.length()>1){

        cout<<"c cannot be empty and must be only one character. Insert the c character:\t";
        getline(cin,C);

    }

    c=C[0];

    cout<<"c = {"<<c<<"}"<<endl;

    cout<<"The string S without the "<<c<<" character is:\t"<<removeCharacter(S,c)<<endl;

    return 0;

}
