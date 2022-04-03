#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        class node{
        public:
        int data;
        node* next;
     node(int val)
    {
        data=val;
        next=NULL;

    }
    };
node* head=NULL;
    void push(int val)
    {
         node* n= new node(val);
        if(head==NULL)
        {
            head=n;
          return;
        }
        node* temp=head;
        while(temp->next!=NULL)
        {

            temp=temp->next;
        }
        temp->next=n;
    }

    void pop()
    {
        if(head==NULL) cout<<"Nothing to Pop \n";
        else
        {
            node* temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;

            }
            temp->next=NULL;
        }

    }
    void Top()
    {
       if(head==NULL) cout<<"Nothing Exist \n";
        else
        {
            node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;

            }
            cout<<"Top of Stack is : " <<temp->data<<"\n";
        }





    }
    void Size()
    {
        int i=0;
        node* temp=head;
        while(temp!=NULL)
        {
            i=i+1;
            temp=temp->next;

        }
        cout<<"The size of the Stack is : "<<i<<"\n";
    }

    void Displays()
    {
    node* temp=head;

        if(head==NULL)
        {

            cout<<"No element present \n";
        }
    else{
cout<<"\n";
        while(temp!=NULL)
        {

            cout<<temp->data<<" ";


           temp=temp->next;

        }
    }
    cout<<"\n";

    }






};
Stack q;
int main()
{

int i;
cout<<"\n#********************#\n\n";
cout<<" Press 1 to Insert Element in Stack \n";
cout<<" Press 2 to get Top Element in Stack \n";
cout<<" Press 3 to Remove a Element from Stack \n";
cout<<" Press 4 to Get Size of Stack \n";
cout<<" Press 5 to Display Element of Stack \n";
cout<<" Press 0 to Exit From Program \n";
cin>>i;
if(i==1)
{
    cout<<"\n Enter the value want to Push \n ";
    int k;
    cin>>k;
    q.push(k);
    main();
}
else if(i==2)
{

      q.Top();


    main();
}
else if(i==3)
{

      q.pop();


    main();
}
else if(i==4)
{

q.Size();



    main();
}
else if(i==5)
{
q.Displays();




    main();
}
else if(i==0)
{


exit(0);
}
else
{

    cout<<" Wrong Key Pressed !! TRY AGAIN \n";
    main();
}

    return 0;
}

