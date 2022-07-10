#include<iostream>
using namespace std;
int main()
{
    //c++ program for transportation service//
    int a,b,c;
    b=50;
    // b is equal to number of passenger left for each stop//
    cout<< endl;
    cin>>a;
    //a is equal to number of passenger in the bus//
    if(a>b)//to determine number of seats left in the bus//
    {
        c=a%b;//if no of passengers is higher than b then perform modulus operation on a//
        c=b-c;//to determine seats left subtract the modulus value with b//
        cout<<"the seat left is "<<c<<"\n";
    }
    else if(a<b)
    {
        c=b-a;//if a is less than b then subtract a from b//
        cout<<"the seat left is "<<c;
    }
    return 0;
}
