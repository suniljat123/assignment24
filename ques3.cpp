#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter power:";
    cin>>b;
    int c=power(a,b);
    cout<<a<<"^"<<b<<"="<<c;
    return 0;

}
int power(int x,int y)
{
    int i,p=1;
    for(i=0;i<y;i++)
    {
        p=p*x;
    }
    return p;
}
