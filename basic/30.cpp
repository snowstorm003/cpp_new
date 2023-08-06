#include <iostream>
using namespace std;

int binary(int decimal)
{
    if(decimal==0)
        return 0;
    if(decimal==1)
        return 1;
    return (decimal%2)+(10*binary(decimal/2));
}

int main()
{
    int decimal;
    cout<<" Enter decimal : ";
    cin>>decimal;

    // int result=1;

    // while(decimal!=0)
    // {
    //     int remainder = decimal%2;
    //     result = result*10 + remainder;
    //     decimal = decimal/2;
    // }

    // reverse result 

    int result = binary(decimal);
    
    cout<<" Binary : "<<result;
}
