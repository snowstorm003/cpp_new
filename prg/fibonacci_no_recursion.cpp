#include <iostream>
using namespace std;

int main()
{
    int last_term;

    cout << " Enter last term : ";
    cin >> last_term;

    int first_term = 0, second_term = 1;
    int third_term;

    if (last_term == 1)
        cout << first_term;

    else if (last_term == 2)
        cout << first_term << ", " << second_term;

    else
    {
        cout << first_term << ", " << second_term;

        for (int i = 3; i <= last_term; i++)
        {
            third_term = first_term + second_term;
            first_term = second_term;
            second_term = third_term;

            cout << ", " << third_term;
        }
    }
}