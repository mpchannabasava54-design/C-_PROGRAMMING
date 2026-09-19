#include<iostream>
using namespace std;
void find(int arr[5],int num)
{
    for(int i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
            cout<<"The target number is"<<" "<<num<<"found"<<endl;
        }
    }

int main()
{
    int arr[5],target;
    cout<<"Enter the array elements:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target element:";
    cin>>target;
    find(arr,target);

    return 0;
}