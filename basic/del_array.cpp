#include <iostream>
using namespace std;

void delete_array_element(int arr[], int &curr_size, int position)
{
    if(position>curr_size)
        cout<<" Invalid Input. Kindly enter valid input.";

    for(int i=position; i<curr_size-1; i++)
        arr[i]=arr[i+1];
    
    curr_size--;
}

int main()
{
    int arr[]={14, 15, 100, 66, 0, 999, -669, 44};
    int current_size=sizeof(arr)/sizeof(arr[0]);

    int position;

    cout<<" Enter position for deletion : ";
    cin>>position;

    delete_array_element(arr, current_size, position);

    for(int i=0; i<current_size; i++)
        cout<<" "<<arr[i];

    return 0;

}