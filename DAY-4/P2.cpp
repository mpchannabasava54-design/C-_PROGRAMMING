#include<iostream>
using namespace std;
int main()
{
    int i,numbers[5],even_count=0,odd_count=0;
    cout<<"Enter the numbers:";
    for(i=0;i<5;i++)
    {
        cin>>numbers[i];
    }
    for(i=0;i<5;i++)
    {
        if(numbers[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout<<"Even numbers:"<<even_count<<endl;
    cout<<"Odd numbers:"<<odd_count<<endl;
    return 0;
}