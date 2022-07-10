#include<bits/stdc++.h>
using namespace std;
class Room
{
private:
    int length;
    int breadth;

public:
    void setlengthbreadth(int l,int b)
    {
        length=l;
        breadth=b;
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
    Room r;
    r.setlengthbreadth(10,15);
    cout<<"Area is "<<r.calculatearea()<<endl;
    cout<<"length is "<<r.getlength();
}
