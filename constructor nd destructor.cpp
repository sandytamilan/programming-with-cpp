
#include<bits/stdc++.h>
using namespace std;
class Room
{
private:
    int length;
    int breadth;

public:
    Room(int l,int b)
    {
        cout<<"constructor called"<<endl;
        length=l;
        breadth=b;
    }
    Room(int l)
    {
        cout<<l<<endl;;
    }
    ~Room()
    {
        cout<<"destructor called";
    }
    int getlength()
    {
        return length;
    }
    int calculatearea()
    {
        return length*breadth;
    }
};
int main()
{
    Room r(10,5);
    Room r1(6);
    cout<<"Area is "<<r.calculatearea()<<endl;
    cout<<"length is "<<r.getlength()<<endl;
}
