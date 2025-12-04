/*
Write a recursive function that inverts the S string and returns it.
*/

#include <iostream>
#include <string>

using namespace std;

string invertString(const string &S, unsigned int i=0){

    if(i>=S.length())
        return "";

    else{

        string invertedRest=invertString(S,i+1);
        return invertedRest + S[i];

    }

}

int main(int argc, char **argv){

    string S="";

    cout<<"This program inverts the S string."<<endl;

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
    
    cout<<"The S string inverted is:\t"<<invertString(S)<<endl;
 
    return 0;

}
