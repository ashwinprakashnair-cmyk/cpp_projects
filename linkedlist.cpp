#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node *next;
  Node(int value)
  {
    data=value;
    next=NULL;
  }
};
class LinkedList
{
  public:
  Node *head;
  LinkedList()
  {
    head=NULL;
  }
  void add(int value)
  {
    Node *n1=new Node(value)
    if(head==NULL)
    {
      head=n1;
      return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=n1;
    cout<<"\nelement added";
  }
  void display()
  {
    if(head==NULL)
    {
      cout<<"Linked list is empty";
    }
    Node *temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<"NULL";
  }
};
int main()
{
  LinkedList l1;
  l1.add(10);
  l1.add(20);
  l1.add(30);
  l1.display();
  return 0;
}
