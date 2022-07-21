#include<iostream>
using namespace std;
//subarray sum method 1 by brute force with complexity of n^3
int subarraysum1(int marks[],int n){
            int largestsum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarray=0;
            for (int k = i; k <= j; k++)
            {
                subarray+=marks[k];
            }
            largestsum=max(largestsum,subarray);
            
        }
        
    }
    return largestsum;  
    
}
//subarray sum method 2 by prefix sum with complexity of n^2
int subarraysum2(int marks[],int n){
    //prefix sum
    int prfix[100]={0};
    prfix[0]= marks[0];
    for (int i = 1; i < n; i++)
    {
        prfix[i]= prfix[i-1]+marks[i];  
    }
    
            int largestsum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarray= i>0 ? prfix[i]-prfix[i-1]:prfix[j];
            largestsum=max(largestsum,subarray);
            
        }
        
    }
    return largestsum;  
    }
    //subarray sum method 3 by prefix sum with complexity of n kadane's algo
    int subarraysum3(int marks[],int n){
        int cs=0;
        int largest=0;
        for (int i = 0; i < n; i++)
        {
            cs=cs+marks[i];
            if (cs<0)
            {
                cs=0;
            }
            largest = max(largest, cs);
        }
        return largest;
        
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
    subarraysum1(marks,n);
    subarraysum2(marks,n);
    subarraysum3(marks,n);
    cout<<subarraysum1(marks,n)<<endl;
    cout<<subarraysum2(marks,n)<<endl;
    cout<<subarraysum3(marks,n)<<endl;
}
