 #include<iostream>
using namespace std;
int Max(int,int);
float Max(float,float);
int main()
{
    float a,b,r;
    int c,d,re;
    cout<<"Enter 2 real numbers:";
    cin>>a>>b;
    r=Max(a,b);
    cout<<"highest number="<<r<<endl;
    cout<<"Enter 2 integer numbers:";
    cin>>c>>d;
    re=Max(c,d);
    cout<<"highest number="<<re;
    return 0;

}
int Max(int x,int y)
{
    return (x>y?x:y);
}
float Max(float x,float y)
{
    return (x>y?x:y);
}
