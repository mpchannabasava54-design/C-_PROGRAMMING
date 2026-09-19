#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[5]={9,-1,-3,-5,0};
    int fL=a[0];
    int sL=INT_MIN;

    for(int i=0;i<5;i++){
        if(a[i]>fL){
            sL=fL;
            fL=a[i];
        }
        else if(a[i]>sL && a[i]<fL){
            sL=a[i];
        }
    }

    cout<<fL<<endl;
    cout<<sL<<endl;

    return 0;


}