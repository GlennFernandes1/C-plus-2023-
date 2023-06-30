#include<iostream>
#include<stdio.h>
using namespace std;
int a,b;
void getdata(){
    cout<<"Enter two number=";
    cin>>a>>b;
}
void cal()
{
    char ch;
    cout<<"\n Enter a oparator=";
    cin>>ch;
    switch (ch)
    {
    case '*':cout<<"Result="<<a*b<<endl;

        break;
    case '+':cout<<"result="<<a+b<<endl;
        break;
    case '/':cout<<"Result="<<a/b<<endl;
        break;
    case '-':cout<<"Result="<<a-b<<endl;
        break;
    
    default:cout<<"Invaid oparator"<<endl;
        break;
    }
}
int main()
{
    getdata();
    cal();
    return 0;
}