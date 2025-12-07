/*
Write a recursive function that removes from the S string all the numerical characters (0,1,2,3,4,5,6,7,8,9). The function must return the resultant string.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string removeNumbers(const string &S, unsigned int i=0){

    if(i>=S.length())
        return "";
    
    char current = S[i];

    if(isdigit(S[i]))
        return removeNumbers(S,i+1);

    else
        return current + removeNumbers(S,i+1);

}

int main(int argc, char **argv){

    string S="";

    cout<<"This program removes the numbers from the S string."<<endl;

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

    cout<<"The S string without numerical characters is:\t"<<removeNumbers(S)<<endl;

    return 0;

}
