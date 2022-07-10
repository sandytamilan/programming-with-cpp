#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>myvector;
    myvector.push_back(3);
    myvector.push_back(6);
    myvector.push_back(34);
    myvector.push_back(-2);
    cout<<"vector: ";
    for(signed int i=0;i<myvector.size();i++)
    {
        cout<<myvector.at(i)<<" ";
    }
    cout<<endl;
    myvector.insert(myvector.begin()+1,9);
    cout<<"vector: ";
    for(signed int i=0;i<myvector.size();i++)
    {
        cout<<myvector.at(i)<<" ";
    }
    cout<<endl;
    myvector.erase(myvector.begin()+3);
     cout<<"vector: ";
    for(signed int i=0;i<myvector.size();i++)
    {
        cout<<myvector.at(i)<<" ";
    }
    cout<<endl;
    if(myvector.empty())
    {
        cout<<endl<<"is empty";
    }
    else
    {
        cout<<endl<<"not empty";
    }
    myvector.clear();
       if(myvector.empty())
    {
        cout<<endl<<"is empty";
    }
    else
    {
        cout<<endl<<"not empty";
    }
    cout<<endl;
    return 0;
}
