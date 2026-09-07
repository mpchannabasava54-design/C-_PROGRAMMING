#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5,c=30;
    if(a>b && a>c)
    {
        cout<<"A is greater"<<endl;
    }
    else if(b>c)
    {
        cout<<"B is greater"<<endl;
    }
    else
    {
        cout<<"C is greater"<<endl;
    }
    return 0;
}