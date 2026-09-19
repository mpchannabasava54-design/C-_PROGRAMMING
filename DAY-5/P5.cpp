#include<iostream>
using namespace std;
int main()
{
    int arr[]={20,10,30,10,20,10,10,20};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        int count=0;
        for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            else continue;
        }
        cout<<"count of:"<<arr[i]<<"is"<<count<<endl;
    }
    return 0;
}