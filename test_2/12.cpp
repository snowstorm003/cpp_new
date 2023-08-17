#include <iostream>
using namespace std;

float product(float weight[], int size)
{
    long double result = 1;
    for(int i=0; i<size; i++)
        result=result*weight[i];

    return result;
}

int main()
{
    float weight[] = {10.5, 11, 9, 56.36, 47};

    int size = sizeof(weight)/sizeof(weight[0]);

    float result = product(weight, size);

    cout<<" Product of weights : "<<result;
}