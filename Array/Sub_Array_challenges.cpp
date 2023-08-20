//1)print all posibble subarray of the given array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entre the size of the arrray: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n;j++)
       {
           for(int k=i;k<=j;k++)
           {
               cout<<arr[k]<<" ";
           }
           cout<<"\n";
           
       }
    }
    return 0;
}
//how it comes actually: from here n * n/2 * (n+1)/2 = n^3/8 + n^2/4.
//TIME-COMPLEXITY: o(n^3)

2)Maximun Subarray Sum->Find the subarray in an array which has maximum sum(brute force approach->this approch mean just know what is te=he final result irrespective of the solution).

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"Entre the size of the arrray: ";
    cin>>n;
    int arr[n];
    int sum=0;
    int max_no=INT_MIN;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n;j++)
       {
           sum=0;
           for(int k=i;k<=j;k++)
           {
               sum=sum+arr[k];
               
           }
           max_no=max(max_no,sum);
           cout<<"\n";
           
       }
    }
    cout<<"MAXIMUM SUM OF SUBARRAY: "<<max_no;
    return 0;
}
