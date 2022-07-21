#include <iostream>
using namespace std;
int linear_search(int marks[], int n, int key){
    for (int i = 0; i < n; i++)
   {
    
    if (marks[i]==key)
    {
        return i;
    }
   }
   return -1;
}
int main(int argc, char const *argv[])
{
    int marks[100];
    int n, key;
    cout<<"Enter the no. of the student ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<marks[i]<<"-";
    }
    cout<<endl;
    cout<<"What Element you want to search "<<endl;
    cin>>key;
    int index = linear_search(marks, n, key);
        if (index!=-1)
        {
            cout<<key<<" Element is found at index: "<<index;
        }
        else
        {
            cout<<"Element is not found";
        }
        
        
    }
    
