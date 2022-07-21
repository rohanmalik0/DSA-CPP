#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertattail(node* &head, int val){
     node* n= new node(val);
    if(head==NULL){
        head =n;
        return;
    }
    
    node*  temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void display(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* &head, int val){
    node*temp=head;
    while (temp!=NULL)
    {
        if (temp->data==val)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;   
}
void deleteathead(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
}
void todelete(node* &head,int val){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node* temp=head;
   while(temp->next!=NULL){
            if(temp->data!=val){
                
                node *todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
    
            }
            temp=temp->next;
        }
} 
node* reversek(node* head, int k){
    node* nextptr;
    node* temp=head;
    node* prevptr=NULL;
    int count=0;
    while (temp!=NULL && count<k)
    {
        nextptr=temp->next;
        temp->next=prevptr;
        prevptr=temp;
        temp=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next= reversek(nextptr, k);
    }
    return prevptr;
    
}
node* reverseRecursive(node* &head){
    if(head==NULL || head->next== NULL){
        return head;

    }
    node* newhead= reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int length(node* &head){
    node* temp=head;
    int i=0;
    while (temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
    return i;
}
node* kappend(node* head, int k){
    node* newHead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    int count=0;
    while (tail->next!=NULL)
    {
        if (count==l-k)
        {
            newtail=tail;
            
        }
        else if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newHead;

}
int main(int argc, char const *argv[])
{
    node* head=NULL;
    int choice=1, a=0;
     while (choice!=0)
    {
        
        a=0;
        cout<<"Enter the element: ";
        cin>>a;
        insertattail(head, a);
        cout<<"Do you want to entre number in a linklist: ";
    cin>>choice;
    }
    // cout<<"Enter the Element in the Beginning of the linked list: ";
    // cin>>a;
    // insertathead(head, a);
    display(head);
    // cout<<"Enter the Element to find in the linked list: ";
    // cin>>a;
    // cout<<search(head, a)<<endl;
    // cout<<"Enter the Element to delete in the linked list: ";
    // cin>>a;
    // todelete(head, a);
    // display(head);

    node* newHead=kappend(head, 3);
    display(newHead);
    cout<<"Reverse of the linked list: ";
    // node* newhead=reverseRecursive(head);
    
    int k=2;
    node* newhead= reversek(head, k);
    display(newhead);
    return 0;
}
