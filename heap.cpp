#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val)
        {
            data=val;
            left=NULL;
            right=NULL;

        }
Node* head=NULL;
void Insert(int data)
{

    head=inserts(head,data);

}
Node* inserts(Node* root, int data)
{
    if(root==NULL)
    {
        Node* d= new Node(data);
        root=d;
        return root;
    }
    if(root->data<data)
    {

        swap(root->data,data);
    }
    else
    {


    }




}





};
int main()
{


  cout<<"hello";





    return 0;
}
