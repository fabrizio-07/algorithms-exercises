/*
Write a recursive function that tells if the T string is contained by the S string. The function must return true or false.
*/

#include <iostream>
#include <string>

using namespace std;

bool checkSubstring(const string &S, const string &T, unsigned int i=0, unsigned int j=0){

    if(S.length()+j<T.length()+i || T.length()>S.length())
        return false;

    else if(j>=T.length())
        return true;

    else if(S[i]==T[j])
        return checkSubstring(S,T,i+1,j+1);

    else if(S[i]!=T[j] && j>0)
        return checkSubstring(S,T,i-j+1,0);

    else 
        return checkSubstring(S,T,i+1,j);

}

int main(int argc, char **argv){

    string S="", T="";

    cout<<"This program check if T is a substring of S."<<endl;

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

    cout<<"Insert the T string:\t";
    getline(cin,T);

    while(T.empty()){
 
        cout<<"T cannot be empty. Insert the T string:\t";
        getline(cin,T);
          
    }

    cout<<"T = {"<<T<<"}"<<endl;

    (checkSubstring(S,T) ? cout<<"T is a substring of S"<<endl : cout<<"T is not a substring of S"<<endl);

    return 0;

}
