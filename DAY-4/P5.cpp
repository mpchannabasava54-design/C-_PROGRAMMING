#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[5]={-4,-2,-7,-6,-1};
    int min=a[0];
    int sec_min=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            sec_min=min;
            min=a[i];
        }
        else if(a[i]<sec_min && a[i]<min)
        {
            sec_min=a[i];
        }
    
    }
    cout<<min<<endl;
    cout<<sec_min<<endl;
    return 0;
}