#include <iostream>
using namespace std;

int main()
{
    int temp[10000];
    
    int i=0, input, max=0;

    while(i!=-9999)
    {
        cout<<" Enter Temperature (Press -9999 to calculate the highest temparature) : ";
        cin>>input;
        if(input!=-9999)
        {
            temp[i]=input;
            if(input>max)
                max=input;
            i++;
        }
        else
            i=-9999;

    }

    cout<<" Highest Temperature : "<<max;

}