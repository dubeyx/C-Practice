
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
    };
class BST{
public:
 Node* root;
 BST()
 {
    root=NULL;
 }


    void Insert(int val)
     {
        root=inserts(root,val);

     }

        Node* inserts(Node* root, int val)
        {
        if(root==NULL)
            {
         Node* a = new Node(val);
        root=a;
        return root;
            }
            else if(val<root->data)
                {
        root->left=inserts(root->left,val);

                 }
                    else
                 {

                root->right=inserts(root->right,val);

                 }

                 return root;
                }

    void InOrderDisplay()
         {
            Inorder(root);
        }

         void Inorder(Node* root)
            {
             Node* temp=root;
            if(temp==NULL) return;

            Inorder(root->left);
            cout<<temp->data<<"\n";
            Inorder(root->right);

            }


            void Delete(int val)
            {
                root=Deletes(root,val);

            }
            Node* Deletes(Node* root, int val)
            {
                if(root==NULL) return NULL;
                if(root->data<val)
                {

                    root->right=Deletes(root->right,val);
                }
                else if(root->data>val)
                {
                    root->left=Deletes(root->left,val);
                }
                else
                {
                   if(root->left==NULL)
                   {
                       return root->right;
                   }
                   else if(root->right==NULL)
                   {

                       return root->left;
                   }
                    else if(root->left!=NULL && root->right!=NULL)
                    {
                        int temp=suxcessor(root->left);
                        root->data=temp;
                        root->left=Deletes(root->left,temp);
                        return root;

                    }
                    else
                    {
                        return NULL;

                    }

                }

                return root;
            }
          int suxcessor(Node* root)
          {

              Node* cur=root;
              while(cur->right!=NULL)
              {
                  cur=cur->right;
              }

              return cur->data;
          }


};


BST b ;

int main()
{
int n;

cout<<"********************************************************\n\n";
cout<<"Enter The Corresponding Keys to Perform Operations on BST \n";
cout<<"Enter 1 To Insert Element in The BST \n";
cout<<"Enter 2 To Delete elements from The BST \n";
cout<<"Enter 3 To InOrder Transversal in The BST \n";
cout<<"Enter Any key to EXIT from Program \n";
cin>>n;
if(n==1)
{
   lebel: cout<<"Enter the Value of the Node \n";
    int cd;
    cin>>cd;
    b.Insert(cd);
    cout<<"*** Inserted *****\n";
    cout<<"Do You want to ADD More if Yes Press Y if No Press N \n";
    char c;
    cin.ignore();
    c=getchar();
    if(c=='Y')
    {
        goto lebel;
    }
    else
    {
        main();
    }


}
if(n==3)
{

b.InOrderDisplay();
main();


}
else if(n==2)
{
    int bn;
  cout<<"Enter the Value of the Node You Want to Delete \n";
  cin>>bn;
  b.Delete(bn);
  cout<<" ********* DELETED ********** \n";
  main();




}

return 0;
}
