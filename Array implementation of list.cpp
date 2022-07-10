#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 50
int arr[MAX_SIZE];
int size = 0;


void display(){
    int i;
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";

}

void insertAtPos(int pos,int val){
    int i;

    for(i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }

    arr[pos]= val;
    size++;
    cout<<"Inserted "<<val<<" at pos "<<pos;
}

void deleteFromPos(int pos){
    int i;
    int del = arr[pos];
    for(i=pos;i<size;i++){
        arr[i] = arr[i+1];
    }
    size--;
    cout<<"Deleted " <<del<<" at pos "<<pos;
}
int main(){
    int choice,val,pos;
    while(2){
        cout<<"\n -------- List Menu -----------\n";
        cout<<"1.Insert at end \n";
        cout<<"2.Insert at specified pos \n";
        cout<<"3.Delete at specified pos \n";
        cout<<"4.Display\n";
        cout<<"5.Exit\n";
        cout<<"\n--------------------------------------\n";
        cout<<"Enter your choice:\t";
        cin>>choice;
        switch(choice){
        case 1: cout<<"Enter the data: ";
                cin>>val;
                arr[size++] = val;
                break;
        case 2: if(size == MAX_SIZE){
                    cout<<"Array is full";
                    break;
                }
                cout<<"Enter the pos\(pos starts at 0\):  ";
                cin>>pos;
                if(pos<0 || pos>=size)
                {
                    cout<<"Invalid position";
                    break;
                }
                cout<<"Enter the data: ";
                cin>>val;
                insertAtPos(pos,val);
                break;
        case 3: if(size==0){
                     cout<<"Array is empty";
                    break;
                }
                cout<<"Enter the pos: ";
               cin>>pos;
                if(pos<0 || pos>=size)
                    cout<<"Invalid position";
                else
                    deleteFromPos(pos);
                break;

        case 4: display();
                break;
        case 5: exit(0);

        default: cout<<"Wrong choice";
                 break;
        //read,update,search,length,deleteAtEnd,deleteFromBeginning,insertAtBeginning

        }
    }
    return 0;
}
