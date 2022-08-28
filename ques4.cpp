 #include<iostream>
using namespace std;
void pascal(int);
int combi(int,int);
int fact(int);
int main()
{
    int a;
    cout<<"Enter number:";
    cin>>a;
    cout<<"Pascal triangle="<<endl;
    pascal(a);
    return 0;

}
int fact( int a)
{
    int f=1;
   for(int i=1;i<=a;i++)
   {
       f=f*i;
   }
   return f;
}
int combi(int n,int r)
{
    int c;
    c=(fact(n)/(fact(n-r)*fact(r)));
    return c;
}
void pascal(int a)
{
    int i,j,k,b;
    for(i=1;i<=a;i++)
    {
        k=1;
        b=0;
        for(j=1;j<2*a;j++)
        {
            if(j>=a+1-i&&j<=a-1+i&&k)
            {
                int c=combi(i-1,b);
                cout<<c;
                k=0;
                b++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}
