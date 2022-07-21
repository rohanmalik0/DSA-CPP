class list;

class node
{
private:
    int data;
    node* next;  
public:
    node(int d):data(d), next(NULL){}
    int getdata(){
        return data;
    }
    friend class  list;
};
 class list
 {
 private:
     node * head;
     node * tail;
public:
list():head(NULL),tail(NULL){}
node* begin(){
    return head;
}
void push_front(int data){
    if (head==NULL)
    {
        node * n= new Node(data);
        head = tail = n; 
    }
    else
    {
        node * n= new node(data);
        n->next = head;
        head = n;
    }
    }
    void push_back(int data){
        if (head==NULL)
        {
            node *n= new node(data);
            head = tail = n;
        }
        else
        {
            node * n = new node(data);
            tail->next = n;
            tail = n;
        }
        
    }
}
 