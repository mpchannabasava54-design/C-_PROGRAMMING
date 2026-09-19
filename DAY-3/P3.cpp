#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the name:";
    getline(cin,str);
    int size=str.length();
    cout<<"The length of the string is:"<<size-1<<endl;
    return 0;
}