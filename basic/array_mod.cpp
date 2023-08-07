#include <iostream>
using namespace std;

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int arr2[9]={1,4,9,16,26,36,49,64,81};
    int arr3[9]={1,8,27,64,125,216,343,525,729};

    for(int i=0; i<9; i++)
    {
        if(i%4<6)
            cout<<arr[i%2]<<" ";
        else if(i%6<4)
            cout<<arr2[i%3]<<" ";
        else
            cout<<arr3[i%4]<<" ";
    }
}