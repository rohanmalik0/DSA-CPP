#include <iostream>
using namespace std;
#define n 50
class stack
{
    int* arr;
    int top;
public:
    stack(){
      arr=new int[n];
      top=-1;
    }
    void push_back(int val){
    if (top==n-1)
    {
        cout<<"Overflow"<<endl;
    }
    top++;
    arr[top]=val;
}
void pop_out(){
    if (top==-1)
    {
        cout<<"Stack is Empty";
    }
    
    top--;
}
int Top(){
    if(top==-1){
        cout<<"No element is in top";
    }
    return arr[top];
}
bool empty(){
    return top==-1;

}
};


int main(int argc, char const *argv[])
{
    stack st;
    st.push_back(5);
    st.push_back(3);
    cout<<st.Top()<<endl;
    st.pop_out();
    cout<<st.Top()<<endl;
    return 0;
}
