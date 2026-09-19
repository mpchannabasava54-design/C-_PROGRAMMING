#include<iostream>
using namespace std;
void largest(int x,int y,int z)
{
    if(x>y && x>z)
    cout<<x<<" is the largest number";
    else if(y>z)
    cout<<y<<" is the largest number";
    else
    cout<<z<<" is the largest number";
}
int main()
{
   int a,b,c;
   cout<<"Enter the numbers:";
   cin>>a>>b>>c;
   largest(a,b,c);
   return 0;
}
