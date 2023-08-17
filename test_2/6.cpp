#include <iostream>
using namespace std;

int reverse(int cube)
{
    int rev=0;
    while(cube!=0)
    {
        int last_digit=cube%10;
        rev=rev*10+last_digit;
        cube=cube/10;
    }

    return rev;
}

int average(int  arr[], int size)
{
    int sum=0, avg=0;

    for(int i=0; i<size; i++)
        sum=sum+arr[i];
    
    avg=sum/size;

    return avg;
}

int main()
{
    int arr[] = {546, 4, 5, 6, -536};

    int size = sizeof(arr)/sizeof(arr[0]);

    int avg = average(arr, size);

    int square_of_avg = avg*avg;
    int cube = avg*avg*avg;

    int rev_of_cube_of_avg = reverse(cube);

    int sum = square_of_avg + rev_of_cube_of_avg;

    int flag=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==sum)
        {
            cout<<" Mystical Conection Exists ";
            flag++;
            break;
        }
    }

    if(flag==0)
        cout<<" Mystical Conection does not Exists ";
    
    return 0;
}