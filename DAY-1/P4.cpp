#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the operator:";
    cin>>op;
    if(op == '+'){
        cout<<"Addition:"<<a+b<<endl;
    }
    else if(op == '-')
    {
        cout<<"Subtraction:"<<a-b<<endl;
    }
    else if(op == '*')
    {
        cout<<"Multiplication:"<<a*b<<endl;
    }
    else if(op == '/')
    {
        cout<<"Division:"<<a/b<<endl;
    }
    else
    {
        cout<<"Invalid operator"<<endl;
    }
    return 0;

}