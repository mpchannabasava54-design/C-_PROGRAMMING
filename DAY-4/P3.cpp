#include<iostream>
using namespace std;
int main()
{
    int i,numbers[5],max,sec_max;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the numbers:";
        cin>>numbers[i];
    }
    for(i=0;i<5;i++)
    {
        max=numbers[0];
        if(numbers[i]>max)
        {
            max=numbers[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        sec_max=numbers[0];
        if(numbers[i]==max)
        {
            break;
        }
        else if(sec_max>numbers[i])
        {
            sec_max=numbers[i];
            cout<<sec_max;
        }
    }
    cout<<"Maximum number is:"<<max<<endl;
    cout<<"Second maximum number is:"<<sec_max<<endl;
    return 0;
}

