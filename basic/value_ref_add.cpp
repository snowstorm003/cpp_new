#include <iostream>
using namespace std;
void passByValue(int param1, int param2)
{
    int temp;
    temp = param1;
    param1 = param2;
    param2 = temp;
}

void passByReference(int &param1, int &param2)
{
    int temp;
    temp = param1;
    param1 = param2;
    param2 = temp;
}

void passByAddress(int *param1, int *param2)
{
    int temp;
    temp = *param1;
    *param1 = *param2;
    *param2 = temp;
}
int main()
{
    int number1 = 3, number2 = 4;
    cout << "Current Numbers are: " << endl;
    cout << number1 << " " << number2 << endl;
    // passing by value
    cout << "After Passing by Value, new numbers are: " << endl;
    passByValue(number1, number2);
    cout << number1 << " " << number2 << endl;
    int number3 = 3, number4 = 4;
    cout << "Current Numbers are: " << endl;
    cout << number3 << " " << number4 << endl;
    // passing by reference
    cout << "After Passing by Reference, new numbers are: " << endl;
    passByReference(number3, number4);
    cout << number3 << " " << number4 << endl;
    int number5 = 3, number6 = 4;
    cout << "Current Numbers are: " << endl;
    cout << number5 << " " << number6 << endl;
    // pass by address
    cout << "After Passing by Address, new numbers are: " << endl;
    passByAddress(&number5, &number6);
    cout << number5 << " " << number6 << endl;
    return 0;
}