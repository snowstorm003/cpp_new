#include <iostream>
using namespace std;

void reverse(string candy[], string rev_candy[], int size)
{
    for (int i = 0; i < size; i++)
        rev_candy[i] = candy[size - i - 1];
}

int main()
{
    string candy[] = {"melody", "tofee", "dhinka", "chika", "dabang", "gangu"};
    int size = sizeof(candy) / sizeof(candy[0]);

    string rev_candy[size];

    reverse(candy, rev_candy, size);

    cout << " Old Array:-";
    for (int i = 0; i < size; i++)
        cout << " " << candy[i];

    cout << "\n New Array:-";
    for (int i = 0; i < size; i++)
        cout << " " << rev_candy[i];

    return 0;
}