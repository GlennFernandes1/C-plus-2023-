#include<iostream>
using namespace std;
void pattran()
{
    int i,j,n;
    cout<<"Enter a Number=";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<"*";
           
        }
        cout<<endl;
    }
}
int main(){
    pattran();
    return 0;
}
