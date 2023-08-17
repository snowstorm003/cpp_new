#include <iostream>
using namespace std;

int main()
{
    float height[] = {12.2, 99, 10.3, 5.69, 69.69, 14.69, 10002};

    int size = sizeof(height)/sizeof(height[0]);

    float sum;

    for(int i=0; i<size; i++)
        sum=sum+height[i];
    
    float avg=sum/size;

    cout<<" Average Height : "<<avg;
}