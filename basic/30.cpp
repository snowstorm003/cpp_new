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

    // int cpy1=decimal;
    // int result=0;

    // while(decimal!=0)
    // {
    //     int remainder = decimal%2;
    //     result = result*10 + remainder;
    //     decimal = decimal/2;
    // }

    // int cpy2=result;
    // result=0;

    // while(cpy2>0)
    // {
    //     int remainder = cpy2%10;
    //     result=result*10+remainder;
    //     cpy2=cpy2/10;
    // }

    // if(cpy1%2==0)
    // {
    //     while(cpy1%2!=1)
    //     {
    //         result=result*10;
    //         cpy1=cpy1/2;
    //     }
    // }

    int result = binary(decimal);
    
    cout<<" Binary : "<<result;
}
