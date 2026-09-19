#include<iostream>
using namespace std;
void largest(int arr[])
{
    int max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The largest element in array:"<<max<<endl;
}
int main()
{
    int arr[5],i;
    cout<<"Enter the elements:";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    largest(arr);
    return 0;
}