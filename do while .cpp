#include<iostream>
using namespace std;
int main()
{
    int i=0,item;
    cout<<"enter the item price";
    do{
        cin>>item;
        cout<< item*0.15<<"\n";
        i++;
     }while(i<3);
     return 0;
}
