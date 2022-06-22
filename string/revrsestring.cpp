#include<iostream>
using namespace std;
// function for reverse string
int main()
{
    string str;
    cin>>str;

    string rev ="";
    // input by user problem
    // for loop

    for(int i=str.length()-1; i>=0; i--)
    {
        rev=rev+str[i];

    }
    cout<<str;

    return 0;
}

