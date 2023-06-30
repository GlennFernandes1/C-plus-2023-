#include<iostream>
using namespace std;
int main(){
    int a=1,n,i;
    cout<<"Enter a number=";
    cin>>n;
    for(i=1;i<=n;i++){
        a=a*i;
    }
    cout<<a<<endl;
    return 0;
}
