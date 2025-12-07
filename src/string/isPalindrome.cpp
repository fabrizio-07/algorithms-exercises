/*
Write a recursive function that tells if the S string is palindrome, so if it can be read in the same way from left to right, and from right to left. The function must return true or false.
*/

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string &S, unsigned int j, unsigned int i=0){

    if(i==j || i>j)
        return true;

    else if(S[i]==S[j] && i<j)
        return isPalindrome(S,j-1,i+1);

    else
        return false;

}

int main(int argc, char **argv){

    string S="";

    cout<<"This program tells if the S string is palindrome."<<endl;

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
    
    if(S.empty())
        cout<<"S is palindrome because it's empty."<<endl;
    else
        (isPalindrome(S,S.length()-1) ? cout<<"S is palindrome."<<endl : cout<<"S is not palindrome."<<endl);

    return 0;

}
