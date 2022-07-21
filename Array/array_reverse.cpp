#include <iostream>
using namespace std;

void reverse_array(int marks[],int n){
    int s=0;
    int e=n-1;
    while (s<e) 
    {
        swap(marks[s],marks[e]);
        s+=1;
        e-=1;
    }
    
}

int main(int argc, char const *argv[])
{
    int marks[100];
    int n;
    cout<<"Enter the no. of the student ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    reverse_array(marks,n);
    for(int i = 0; i < n; i++)
    {
        cout<<marks[i]<<" ";
        
    }
    cout<<endl;
}