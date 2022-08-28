#include<iostream>
using namespace std;
bool prime(int);
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    bool b=prime(a);
    if(b==1)
        cout<<a<<" is prime number";
    else
        cout<<a<<" is not a prime number";
    return 0;

}
bool prime(int x)
{
    int i,f=0;
    for(i=2;i<=(x/2);i++)
    {
        if(x%i==0)
        {
            f=1;
            return false;
            break;
        }
    }
    if(f==0)
        return true;
}
