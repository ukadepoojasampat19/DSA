// Max till i.(imp)
/*Given an array a[] of size n for every i from 0 to n-1 output array a[0],a[1]   a[n];*/

/*eg[12 ,34, 5, 78, 3 ];
ans:12 34 34 78 78*/
/*
#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=-987778;
    for(int i=0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<"\n";
    }
    return 0;
}*/
//***subarray v/s subsequence.***

// Number of subarrays of an array with n element =nC2 + n=n*(n+1)/2;
// A subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaning elements .
// [1 2 0 7 2 0 2]=>[1  0   0 2]=>[2 7 2]=>order should be maintain=>2^n. 
//every subarray is subsequence but every subsequence is not subarray.

/*2)Sum of all subarray.
problem-stm: Given an array a[] of size n.Output sum of each subarray of the given array.*/ 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int total_subarray=(n*(n+1))/2;
    cout<<"\n Total number of subarray formed: "<<total_subarray<<"\n";
    cout<<"Sum of each subarray is :\n";
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<"\n";
        for(int j=i+1;j<n;j++)
        {
           
            cout<<arr[i] + arr[j]<<"\n";
        }
    }
    return 0;
}
