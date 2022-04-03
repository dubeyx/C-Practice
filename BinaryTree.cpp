#include<iostream>
#include<queue>
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
                left=right=NULL;
            }

};

class BinaryTree{

public:
    Node* root;
    BinaryTree()
    {
        root=NULL;

    }
    void Insert(int val)
    {

        root=Inserts(root,val);

    }
Node* Inserts(Node* root, int val)
{
Node* t=new Node(val);
    if(root==NULL)
    {

        root=new Node(val);
        return root;

    }
queue<Node*> q;
q.push(root);
while(!q.empty())

{
    Node* temp=q.front();
    q.pop();

    if(temp->left!=NULL)
    {
        q.push(temp->left);

    }
    else
    {
        temp->left=t;
        return root;
    }
    if(temp->right!=NULL)
    {

        q.push(temp->right);
    }
    else
    {
         temp->right=t;
         return root;

    }


}
}
void Display()
{
cout<<" Element \n";
    Inorder(root);


}
void Inorder( Node* head)
{
    if(head==NULL) return;
    Inorder(head->left);
    cout<<head->data<<"\n";
     Inorder(head->right);
}
};


int main()
{
BinaryTree b;



b.Insert(12);
b.Insert(1);
b.Insert(10);
b.Insert(2);
b.Insert(102);
b.Display();
    return 0;
}
