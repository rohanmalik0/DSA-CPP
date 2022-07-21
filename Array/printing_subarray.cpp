#include<iostream>
using namespace std;
void printing_subarray(int marks[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<marks[k]<<",";
            }
                cout<<endl;
            
        }
        
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
    printing_subarray(marks,n);
}
