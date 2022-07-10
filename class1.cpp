#include<bits/stdc++.h>
using namespace std; 

class student
{
    public:
    int age;
    
    string fname;
    string lname;
    int std;
};


int main() {
   student obj;
   obj.age=15;
   obj.fname="john";
   obj.lname="carmack";
   obj.std=10;
   
   cout<<obj.age<<endl<<obj.lname<<", "<<obj.fname<<endl<<obj.std<<endl;
   cout<<endl;
   cout<<obj.age<<","<<obj.fname<<","<<obj.lname<<","<<obj.std;
    return 0;
}
