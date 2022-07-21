#include <iostream>
using namespace std;
void print_all_pairs(int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = marks[i];
        for (int j = i; j < n; j++)
        {
            int y =marks [j];
            cout<<x<<","<<y<<endl;
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
    print_all_pairs(marks,n);
}