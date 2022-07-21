#include <iostream>
#include "list.h"
using namespace std;

int main(int argc, char const *argv[])
{
    list l;
    l.push_front(1);
    l.push_back(2);
    l.push_back(0);
    
    node* head = l.begin();
    while (head!=NULL)
    {
        cout<<head->getdata()<<"->";
        head = head->next;
    }
    
    return 0;
}
