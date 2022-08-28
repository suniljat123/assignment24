#include<iostream>
using namespace std;
void swapn(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    swapn(a,b);
    cout<<"A="<<a<<endl<<"B="<<b;
    return 0;

}
void swapn(int &x,int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
