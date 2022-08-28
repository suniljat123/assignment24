 #include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
int main()
{
    float a,b,r;
    int c,d,re;
    cout<<"Enter 2 real numbers:";
    cin>>a>>b;
    r=add(a,b);
    cout<<"Sum="<<r<<endl;
    cout<<"Enter 2 interger numbers:";
    cin>>c>>d;
    re=add(c,d);
    cout<<"Sum="<<re;
    return 0;

}
int add(int x,int y)
{
    return x+y;
}
float add(float x,float y)
{
    return x+y;
}
