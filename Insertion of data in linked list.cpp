#include<iostream>
using namespace std;
//single linked list
//define node
class Node
{
    public:
    int key;//data
    Node*next;//address
};
//creating node
Node*newnode(int data)
{
    Node*n=new Node();//object creation
    n-> key=data;//object asign to key
    n->next=NULL;//address field
    return n;
}
//insertion of data
Node*insert_begin(int data,Node*head)
{
    Node*m=newnode(data);
    if(head==NULL)
    {
        head =m;
    }
    else
    {
        m->next=head;
        head=m;
    }
    return head;
}
//insertion at end
Node*insert_end(int data,Node*head)
{
    Node*m=newnode(data);
    if(head==NULL)
    {
        head =m;
    }
    else
    {
        Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=m;
    }
    return head;
}
//insertion at middle
Node*mid_insert(int data,Node*head,int pos)
{
    Node*m=newnode(data);
    if(head==NULL)
    {
        head=m;
    }
    else
        {
         int count=1;        
         Node*temp=head;
         while(temp->next!=NULL)
         {
             count++;
             if(count==pos)
             {
                 break;
             }
             temp=temp->next;
         }
         if(count==pos)
         {
             m->next=temp->next;
             temp->next=m;
         }
         else
         {
           cout<<"invalid";  
         }
         //return head;
        }
          return head;
}
//display the list
Node*display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->key<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
//main function
int main()
{
    Node*head=NULL;
    head=insert_begin(30,head);
    head=insert_begin(30,head);
    head=insert_end(3,head);
    head=insert_begin(380,head);
    head=insert_end(392,head);
    head=mid_insert(55,head,4);
    head=display(head);
}


