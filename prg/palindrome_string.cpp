#include <iostream>
using namespace std;

string palindrome(string str)
{
    string rev;
    int len=str.length();

    for(int i=len-1; i>=0; i--)
        rev=rev+str.at(i);

    return rev;
}

int main()
{
    string str;

    cout<<" Enter string : ";
    cin>>str;

    string rev = palindrome(str);

    if(rev==str)
        cout<<" Plaindrome";
    else
        cout<<" Not palindrome";
}
