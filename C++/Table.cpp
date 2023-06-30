#include<iostream>
using namespace std;
int a,b;

void getdata()
{
    
    cout<<"Enter a Number="<<endl;
    cin>>a;

}
void compute(){
    for(b=1;b<=10;b++)
    {
        cout<<a<<" * "<<b<<" = "<< a*b<<endl;
    }
}
int main()
{
    getdata();
    compute();
    return 0;
}

