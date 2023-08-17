#include <iostream>
using namespace std;

void swap(string color[], int size)
{
    string temp = color[0];
    color[0]=color[size-1];
    color[size-1]=temp;
}

int main()
{
    string color[] = {"red", "greeen", "blue", "yellow", "orange", "pink", "white"};

    int size = sizeof(color)/sizeof(color[0]);

    cout<<"\n Before Swap :- \n";

    for(int i=0; i<size; i++)
        cout<<" "<<color[i];

    swap(color, size);

    cout<<"\n After Swap :- \n";

    for(int i=0; i<size; i++)
        cout<<" "<<color[i];
}