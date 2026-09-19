#include<iostream>
using namespace std;
void passarray(int arr[],int n)
{
    for(int i =0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<5;i++)
    {
    cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5];
    passarray(arr,5);
}
