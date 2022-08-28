#include<iostream>
using namespace std;
inline int add(int,int,int=0);
int main()
{
    int a,b,d;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>d;
    int c=add(a,b,d);
    cout<<"Sum of "<<a<<","<<b<<" and "<<d<<"="<<c;
    cout<<endl<<"Enter 2 numbers:";
    cin>>a>>b;
    c=add(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<"="<<c;
    return 0;

}
int add(int x,int y,int z)
{
    return x+y+z;
}
