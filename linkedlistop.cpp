#include<bits/stdc++.h>
using namespace std;

class linkedlist{
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
void add(int val)
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

    void insertFirst(int val)
{
    node* n= new node(val);
    node* temp=head;
    head=n;
    head->next=temp;
}
linkedlist Reverse()
{
linkedlist l;
    node* temp= head;
    while(temp!=NULL)
    {
        l.insertFirst(temp->data);
        temp=temp->next;

    }

return l;

}








void Sort()
{
    node* curr = head;
    node* next;
    int temp;

    while (curr && curr->next)
    {

        node * next = curr->next;
        while (next)
        {
            if (curr->data > next->data)
            {
                std::swap(next->data, curr->data);
            }
            next = next->next;
        }
        curr = curr->next;
    }
}







    void addOn(int ind,int val)
    {

         node* n= new node(val);
    int i=0;

        node* temp=head;
        node* wamp=NULL;
        while(temp!=NULL)
        {
            if(i==ind-1)
            {
                wamp=temp;
            }
            if(i==ind) break;
          i=i+1;
            temp=temp->next;
        }
        if(ind>i){ cout<<"Not Possible \n"; return;}
        n->next=temp;
        if(ind==0) {n->next=head;head=n; return;}
        wamp->next=n;
    }
    void addAt(int Target,int num)
    {
        if(head==NULL) {cout<<" No element exist \n"; return;}
        node* n= new node(num);
       node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==Target) break;
            temp=temp->next;
        }
        if(temp==NULL) {cout<<"No Such element exist \n"; return;}
        n->next=temp->next;
        temp->next=n;

    }
void countInt(int num)
{

    int i=0;
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==num) i++;
        temp=temp->next;

    }

    cout<<num<<" appeared "<<i<<" times \n";


}







    void RemoveVal(int Target)
    {
        if(head==NULL){ cout<<"Not Possible"; return;}
       node* temp=head;
       int i=0;
         node* wamp=NULL;
        while(temp->next!=NULL)
        {
            if(temp->next->data==Target) wamp=temp;
            if(temp->data==Target) break;
            temp=temp->next;
            i++;
        }
        if(temp->data!=Target) {cout<<"No Such element exist \n"; return;}
        if(i==0){head=head->next; return;  }
       wamp->next=temp->next;


    }
void removeAt(int ind)
{
    if(head==NULL) { cout<<"NO element present"; return;}
    if(ind==0) {head=head->next; return;}
    int i=0;

        node* temp=head;
        node* wamp=NULL;
        while(temp!=NULL)
        {
            if(i==ind-1)
            {
                wamp=temp;
            }
            if(i==ind) break;
          i=i+1;
            temp=temp->next;
        }
        if(ind>i){ cout<<"Not Possible \n"; return;}

    wamp->next=temp->next;



}




    void Count()
    {
        int i=0;
        node* temp=head;
        while(temp!=NULL)
        {
            i=i+1;
            temp=temp->next;

        }
        cout<<"The size of the Queue is : "<<i<<"\n";
    }
    void Sortedinsert(int num)
    {

        add(num);
       Sort();
    }







    void Displays()
    {
    node* temp=head;

        if(head==NULL)
        {

            cout<<"No element present \n";
        }
    else{

        while(temp!=NULL)
        {

            cout<<temp->data<<"  ";


           temp=temp->next;

        }
    }
cout<<"\n";
    }

int get(int i)
{
    int k=0;
    node* temp=head;
    while(temp!=NULL)
    {
        if(k==i) return temp->data;
        k++;
        temp=temp->next;
    }



    return 0;

}
void removeDuplicate()
{

    node* current = head;

    node* next_next;

    if (current == NULL)

    return;

    while (current->next != NULL)

    {

    if (current->data == current->next->data)

    {

        next_next = current->next->next;

        free(current->next);

        current->next = next_next;

    }

    else

    {

        current = current->next;

    }

    }


}

void altnode()
{
    linkedlist a;
    linkedlist b;

cout<<"\n#         **********          #\n\n";
cout<<"  Press -1 if you want to stop inputting number  \n\n";
    cout<<"enter the element of first  linklist \n\n";
while(true)
{
 int t;

    cin>>t;
    if(t==-1) break;
    a.add(t);

}

cout<<"enter the element of Second  linklist \n\n";
while(true)
{
 int t;

    cin>>t;
    if(t==-1) break;
     b.add(t);


}
    linkedlist c;
    int i=0;
    while(i<a.Size()|| i<b.Size())
    {
        if(i<a.Size()) c.add(a.get(i));
        if(i<b.Size()) c.add(b.get(i));


        i++;


    }
    c.Displays();
}

node* reverse(node* head)

    {

        if (head == NULL || head->next == NULL)

            return head;



        node* rest = reverse(head->next);

        head->next->next = head;




        head->next = NULL;




        return rest;

    }
void arrnode()
{

    linkedlist a;
    linkedlist b;
node* temp=head;
int i=0;
while(temp!=NULL)
{
  if(i%2==0){ a.add(temp->data); }
  else {b.add(temp->data);}
i++;
temp=temp->next;

}
cout<<"First List\n";
a.Displays();
cout<<"Second List \n";
b.Displays();

}
 int Size()
    {
        int i=0;
        node* temp=head;
        while(temp!=NULL)
        {
            i=i+1;
            temp=temp->next;

        }
        return i;
    }




};
linkedlist q;
int main()
{

int i;

cout<<"\n#********************#\n\n";
cout<<" Press 1 to add Element in LinkedList \n";
cout<<" Press 2 to add Element at any Index of LinkedList \n";
cout<<" Press 3 to add Element by side of any number in LinkedList \n";
cout<<" Press 4 to remove Element at any index in LinkedList \n";
cout<<" Press 5 to remove in Element in LinkedList \n";
cout<<" Press 6 to Sort Element in LinkedList \n";
cout<<" Press 7 to Reverse  LinkedList \n";
cout<<" Press 8 to count any Number in LinkedList \n";
cout<<" Press 9 to add Element in a sorted LinkedList at its appt position \n";
cout<<" Press 10 to know the size of linkedlist \n";
cout<<" Press 11 Display the element of Linkedlist \n";
cout<<" Press 12 to Print alternate element of two linklist  \n";
cout<<" Press 13 to split linklist in two seprate alternate linlists \n";
cout<<" Press 14 to reverse pointer direction of the list \n";
cout<<" Press 0 to Exit From Program \n";

cin>>i;
if(i==1)
{
    cout<<"\n Enter the val want to add \n ";
    int k;
    cin>>k;
    q.add(k);
    main();
}
else if(i==2)
{
    cout<<"\n Enter the Index want to add \n ";
    int k;
    cin>>k;
    cout<<"\n Enter the Val want to add \n ";
    int ind;
    cin>>ind;

      q.addOn(k,ind);


    main();
}
else if(i==3)
{

    cout<<"\n Enter the Number by which side you  want to add \n ";
    int k;
    cin>>k;
    cout<<"\n Enter the Val want to add \n ";
    int num;
    cin>>num;

      q.addAt(k,num);

    main();
}
else if(i==4)
{

   cout<<"\n Enter the Index want to remove \n ";
   int k;
   cin>>k;
   q.removeAt(k);



    main();
}
else if(i==5)
{

    cout<<"\n Enter the Number that u  want to remove \n ";
    int k;
    cin>>k;
    q.RemoveVal(k);

    main();
}
else if(i==6)
{
    q.Sort();

    main();
}
else if(i==7)
{
    q=q.Reverse();
    main();
}
else if(i==8)
{
     cout<<"\n Enter the Number which u want to count \n ";
     int k;
     cin>>k;
     q.countInt(k);




    main();
}
else if(i==9)
{

    cout<<"\n Enter the number that u want to insert in sorted linkedlist \n ";
    int k;
    cin>>k;
    q.Sortedinsert(k);

    main();
}
else if(i==10)
{
    q.Count();
    main();
}

else if(i==11)
{
    q.Displays();

    main();
}
else if(i==11)
{
    q.removeDuplicate();

    main();
}
else if(i==12)
{
    q.altnode();

    main();
}
else if(i==13)
{
   q.arrnode();

    main();
}
else if(i==14)
{
   q.head=q.reverse(q.head);

    main();

}
else if(i==0)
{

    exit(0);
}
else

{

    cout<<"\n Wrong Output,     Try Again !!!!\n";
    main();

}



    return 0;
}
