#include<iostream>
using namespace std;
void arraysum(int arr[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of array elements: "<<sum<<endl;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    arraysum(arr);
}