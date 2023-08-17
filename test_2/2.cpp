#include <iostream>
using namespace std;

int main()
{
    int score[10000];
    
    int i=0, input, total_score=0;

    while(i!=-9999)
    {
        cout<<" Enter Score (Press -9999 to calculate the latest total score) : ";
        cin>>input;
        if(input!=-9999)
        {
            score[i]=input;
            total_score=total_score+input;
            i++;
        }
        else
            i=-9999;

    }

    cout<<" Latest Total Score : "<<total_score;

}