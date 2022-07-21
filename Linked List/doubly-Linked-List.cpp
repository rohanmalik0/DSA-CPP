#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    head->prev=n;
    head=n;
}
void insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        insertathead(head, val);
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}


void display(node* &head){
    node* temp=head;
    while (temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
void deleteathead(node* head){
     node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
}
void todelete(node* &head, int val){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL || head->data==val)
    {
        deleteathead(head);
        return;
    }
    
    
    node* temp=head;
    while (temp->next!=NULL)
    {
        if (temp->data==val)
        {
            node* todelete=temp->next;
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
        }
        
        temp=temp->next;
    }
    
}
int main(int argc, char const *argv[])
{
    node* head=NULL;
    int choice=1, a;
    while (choice!=0)
    {
        cout<<"Enter the element: ";
        cin>>a;
        insertattail(head, a);
        cout<<"Do you want to continue: ";
        cin>>choice;
    }
    display(head);
    cout<<"Enter the Element which you want to add at head: ";
    cin>>a;
    insertathead(head, a);
    display(head);
    cout<<"Enter the Element which you want to delete: ";
    cin>>a;
    todelete(head, a);
    display(head);
    return 0;
}
