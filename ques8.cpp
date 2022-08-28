 #include<iostream>
using namespace std;
float area(float);
float area(float,float,float);
float area(float,float);
int main()
{
    float r,b,h,l,a;
    int ch;
        cout<<"Press 1: To calculate Area of Circle"<<endl<<"Press 2: To calculate Area of Triangle"<<endl<<"Press 3: To calculate Area of Rectangle"<<endl<<"Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter radius of circle:";
                cin>>r;
                a=area(r);
                cout<<"Area of triangle having radius "<<r<<"="<<a<<endl;
                break;
            case 2:
                cout<<"Enter base and height of triangle:";
                cin>>b>>h;
                a=area(b,h);
                cout<<"Area of triangle="<<a<<endl;
                break;
            case 3:
                cout<<"Enter length,breadth and height of triangle:";
                cin>>l>>b>>h;
                a=area(l,b,h);
                cout<<"Area of Rectangle="<<a<<endl;
                break;
            default:
                cout<<"Invalid choice";
        }
    return 0;

}
float area(float x,float y,float z)
{
    return x*y*z;
}
float area(float x,float y)
{
    return 0.5*x*y;
}
float area(float x)
{
    return 3.14*x*x;
}


