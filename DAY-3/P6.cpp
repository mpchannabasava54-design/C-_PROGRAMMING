#include<iostream>
using namespace std;
int main()
{
    int numbers[5],target;
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>numbers[i];
    }
    cout<<"Enter the target number:";
    cin>>target;
    for(int i=0;i<5;i++)
    {
        if(numbers[i]==target)
        {
            cout<<"Target variable is found at the index:"<<i<<endl;
            break;
        }
    }
    return 0;
}