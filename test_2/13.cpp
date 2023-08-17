#include <iostream>
using namespace std;

void sort(int height[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(height[j]>height[j+1])
            {
                int temp=height[j];
                height[j]=height[j+1];
                height[j+1]=temp;
            }
        }
    }
}

int main()
{
    int height[] = {15, 10, 4589, 448, 44, 1, 5, 47, 556};

    int size = sizeof(height)/sizeof(height[0]);

    cout<<"\n Height before sorting:-\n";
    for(int i=0; i<size; i++)
        cout<<" "<<height[i];

    sort(height, size);

    cout<<"\n Height after sorting:-\n";
    for(int i=0; i<size; i++)
        cout<<" "<<height[i];
}