#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="12345";//*string stream*//
    stringstream sandy;
    sandy<<s;
    int i=0;
    sandy>>i;
    cout<<"the value of string is :"<<i<<endl;
    /*stoi function*/
    string s1="45";
    string s2="3.4568";
    string s3="5854o";
    int n1=stoi(s1);
    int n2=stoi(s2);
    int n3=stoi(s3);
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;
    /*atoi function*/
    const char*s11="45";
    const char*s22="3.4568";
    const char*s33="5854o";
    int n11=atoi(s11);
    int n22=atoi(s22);
    int n33=atoi(s33);
    cout<<n11<<endl;
    cout<<n22<<endl;
    cout<<n33<<endl;
    /*sscanf function*/
    const char*s111="45";
    const char*s222="3.4568";
    const char*s333="5854o";
    int n111;
    int n222;
    int n333;
    sscanf(s111,"%d",&n111);
    sscanf(s222,"%d",&n222);
    sscanf(s333,"%d",&n333);
    cout<<n111<<endl;
    cout<<n222<<endl;
    cout<<n333<<endl;
    return 0;
}
