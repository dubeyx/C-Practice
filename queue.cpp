//Array Implementation of queue FIFO
#include<iostream>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
void insert()
{
    int val;
    if(rear==n-1)
    {

        cout<<"OverFlow";
    }
    cout<<"Enter the Value";
    cin>>val;
     front=0;
       rear=rear+1;
    queue[rear]=val;


}
void Display()
{
    if(rear==front)
    {

        cout<<"nothing to display";
        return;
    }
    while(rear>=front)
    {
        cout<<queue[rear]<<"\n";
        rear--;


    }

}
int main()
{

Display();

return 0;

}




