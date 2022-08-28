 #include<iostream>
using namespace std;
int fibb(int);
int main()
{
    int a,r;
    cout<<"Enter number which you want to find:";
    cin>>a;
    r=fibb(a);
    if(r==1)
        cout<<endl<<a<<" is found in fibonacci series"<<endl;
    else
        cout<<endl<<a<<" is not found in fibonacci series"<<endl;
    return 0;

}
int fibb(int a)
{
    cout<<"Fibonacci series=";
    cout<<"0 1 ";
    if(a==0||a==1)
        return 1;
    else
    {
        int b=0,c=1,x=0;
        while(x<=a)
        {
            x=b+c;
            b=c;
            c=x;
            cout<<x<<" ";
            if(x==a)
                return 1;
        }
    }
}
