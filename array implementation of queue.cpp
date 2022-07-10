#include<bits/stdc++.h>
using namespace std;
int qeue[100],n=100,rear=-1,front=-1;
void Insert()
{
    int val;
    if(rear==n-1)

        cout<<"queue overflow"<<endl;

    else
    {
        if(front==-1)

            front=0;
            cout<<"enter the element :";
            cin>>val;
            rear++;
            qeue[rear]=val;

    }
}

void Delete()
{
    if(front==-1||front>rear)
    {
        cout<<"queue underflow";
    }
    else
    {
        cout<<"the element deleted is : "<<qeue[front]<<endl;
        front++;
    }
}

void Display()
{
    if(front==-1)
    {
        cout<<"queue is empty";
    }
    else
    {
         cout<<"Queue elements are : ";
        for(int i = front; i <= rear; i++)
        {
        cout<<qeue[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int ch;
    cout<<"1. add the element to queue"<<endl;
    cout<<"2. de1ete the element in queue"<<endl;
    cout<<"3. display the element in queue"<<endl;
    cout<<"4. exit"<<endl;
    do
    {
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            Insert();
            break;

        case 2:
            Delete();
            break;

        case 3:
            Display();
            break;

        case 4:
            cout<<"Exit";
            break;

        default:
            cout<<"invalid"<<endl;
        }
    }while(ch!=4);
    return 0;
}
