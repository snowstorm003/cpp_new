#include <iostream>
using namespace std;

void copy(string book[], string author[], int size)
{
    for(int i=0; i<size; i++)
        author[i]=book[i];
}

int main()
{
    string book[] = {"abc", "def", "ghi", "jkl", "mno"};

    int size=sizeof(book)/sizeof(book[0]);
    
    string author[size];

    copy(book, author, size);

    cout<<" \n Book :-\n";
    for(int i=0; i<size; i++)
        cout<<" "<<book[i];

    cout<<" \n Author :-\n";
    for(int i=0; i<size; i++)
        cout<<" "<<author[i];
}