#include<iostream>
using namespace std;
int Max(int);
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    int b=Max(a);
    cout<<a<<"Maximum value digit is "<<b;
    return 0;

}
int Max(int x)
{
    int i,maximum=0;
    while(x>0)
    {
        i=x%10;
        if(i>maximum)
            maximum=i;
        x/=10;
    }
    return maximum;
}
