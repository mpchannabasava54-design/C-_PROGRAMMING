#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the name:";
    getline(cin,name);
    int size=name.length();
    for(int i=0;i<size;i++)
    {
        cout<<name[i]<<endl;
    }
    return 0;
}