#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << " Enter 1st number : ";
    cin >> num1;
    cout << " Enter 2nd number : ";
    cin >> num2;
    cout << " Enter 3rd number : ";
    cin >> num3;

    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    cout<<" Greatest number : "<<max;
}