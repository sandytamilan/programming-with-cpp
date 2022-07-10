
#include<bits/stdc++.h>
using namespace std;
int stac[100],rear=-1,front=-1,n=100;
void push()
{
    int val;
      cout<<"enter the value :"<<endl;
            cin>>val;
    if(rear>=n-1)
    {
        cout<<"stack overflow";
    }
    else
        {
        rear++;
        stac[rear]=val;
        }
}

void pop()
{
    if(top<=-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"the popped element is :"<<stac[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"stack elements are :";
        for(int i=top;i>=0;i--)
        {
            cout<<stac[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"stack is empty";
    }

}
int main()
{
    int ch,val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do
    {
    cout<<"enter your choice :"<<endl;
    cin>>ch;
        switch(ch)
        {
    case 1:
        {

            push();
            break;
        }

    case 2:
        {
            pop();
            break;
        }

    case 3:
        {
            display();
            break;
        }

    case 4:
        {
            cout<<"exit"<<endl;
            break;
        }

    default :
        {
            cout<<"Invalid"<<endl;
        }
        }
    }while(ch!=4);
    return 0;
}
