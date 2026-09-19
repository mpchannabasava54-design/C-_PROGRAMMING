#include<iostream>
using namespace std;
void factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"FACTORIAL OF "<<n<<" IS:"<<fact<<endl;
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    factorial(num);
    return 0;
}
