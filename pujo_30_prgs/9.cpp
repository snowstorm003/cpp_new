//9. Write a C++ program to search for an element in an array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, -8, 0, 11, -58, 999};
    int len=sizeof(arr)/sizeof(arr[0]);
    int num, pos;

    cin>>num;

    for(int i=0; i<len; i++)
        if(num==arr[i])
        {
            pos=i;
            break;
        }

    cout<<(pos+1);
}