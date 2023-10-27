//29. Write a C++ program to reverse a string.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverse(string str)
{
    int len = str.length();
    string rev="";

    for(int i=0; i<len; i++)
        rev=str.at(i)+rev;

    return rev;
}

// string reverse(string str, string rev, int len)
// {
//     if(len!=0)
//     {
//         rev=rev+str.at(len-1);
//         len--;
//         cout<<rev<<" ";
//         reverse(str, rev, len);
//     }

//     return rev;
// }

int main()
{
    string str = "hello world";
    // int len = str.length();

    // string rev = reverse(str, "", len);
    string rev = reverse(str);

    cout<<" Reversed string : "<<rev;
}