#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int numbers[10]={10,30,20,30,10,50,60,30,20,10};
    bool duplicate;
    for(i=0;i<10;i++)
    {
        duplicate = false;
        for(j=0;j<i;j++)
        {
        if(numbers[i]==numbers[j])
        {
            duplicate = true;   
            break;
        }
        }
        if(!duplicate)
        {
            cout<<numbers[i]<<" ";
        }
    }
    return 0;

}