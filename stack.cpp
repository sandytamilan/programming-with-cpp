#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>mystack;
    mystack.push(3);
    mystack.push(9);
    mystack.push(7);
    cout<<"No of elements in stack :"<<mystack.size()<<endl;

    while(!mystack.empty())
    {
        cout<<"popping :"<<mystack.top()<<endl;
        mystack.pop();
    }
    cout<<"No of elements in stack :"<<mystack.size()<<endl;
    return 0;
}
