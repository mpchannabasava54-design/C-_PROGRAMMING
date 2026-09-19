#include<iostream>
#include<string>
using namespace std;
int main()
{
    int numbers[5],sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the numbers:";
        cin>>numbers[i];
        sum=sum+numbers[i];
    }
    cout<<"Sum is :"<<sum<<endl;
    return 0;

}