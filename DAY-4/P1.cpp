#include<iostream>
using namespace std;
int main()
{
    int numbers[5],i;
    cout<<"Enter the array elements:";
    for(i=0;i<5;i++)
    {
        cin>>numbers[i];
    }
    cout<<"Revesed array is:";
    for(i=4;i>=0;i--)
    {
        cout<<numbers[i]<<" ";
    }
    return 0;
}