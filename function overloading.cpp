#include <iostream>
using namespace std;
int sume(int c,int d);
double sume(double c,double d);
int mul(int,int);
float mul(float,int);

int mul(int a,int b)
{
    return a*b;
}
float mul(double x, int y)
{
    return x*y;
}

int sum(int c,int d)
{
    return c+d;
}
double sum(double c,double d)
{
    return c+d;
}
int main()
{
int add=sum(10,5);
double ad=sum(10.2,7.5);
int r1 = mul(6,7);
float r2 = mul(0.2,3);
cout<<add<<endl;
cout<<ad<<endl;
cout << "r1 is : " <<r1<< endl;
cout <<"r2 is : "  <<r2<< endl;
    return 0;
}
