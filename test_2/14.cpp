#include <iostream>
using namespace std;

bool palindrome(char letter[], int size)
{
    string wrd1="", wrd2="";
    for(int i=0; i<size; i++)
    {
        wrd1=wrd1+letter[i];
        wrd2=letter[i]+wrd2;
    }

    if(wrd1==wrd2)
        return true;
    return false;
}

int main()
{
    char letter[] = {'a', 'b', 'c', 'b', 'a'};

    int size=sizeof(letter)/sizeof(letter[0]);

    bool result = palindrome(letter, size);

    if(result)
        cout<<" Palindrome";
    else
        cout<<" Not Palindrome";

    return 0;
}