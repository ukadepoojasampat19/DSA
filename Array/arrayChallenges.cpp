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

//**Longest arithematic subarray**
// An arithemstic subarray is an array that cintains at leasr two integers and the difference betweeb the consecutive integers are eqaul .eg[9,10],[3,3,3],[9,7,5,3]is a arithemetic array,while[1,3,3,7],[2,1,2] and [1,2,4] ar non arithematic array.

// 3)Sarasvati has an array of N  non=-negative integers. The i-th integer of the array is A.She wants to choose a contigious arithemtic subarray from her array that has the maximun length .please help her to determine the length of the longest contigious arihematic subarray.
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
        
    }
  
     int ans=2;
     int pd=arr[1]-arr[0];
     int curr=2;
     int j=2;
     while(j<n)
     {
         if(pd == arr[j] - arr[j-1])
         {
             curr++;
         }
         else
         {
             pd=arr[j] - arr[j-1];
             curr=2;
         }
         ans=max(ans,curr);
         j++;
        
     }
      cout<<ans<<"\n";
    return 0;
}

/*4)record breaking day.

isyana is given the number of visitors at her local park on N consecutive days.The
number of visitor on the i-th day is Vi.A day is record breaking if it satisfies both of the following conditions:
1)The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
2)Either it is the last day ,or the  number of visitors on the day is strictly larger than the 
number of visitors on the following day.
Note that the very first day could be a record breaking day!
please help isyana find out the number of record breaking days;*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    bool status=false;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n + 1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int rec_break=0;
    int mx=-1;
    arr[n]=-1;
    if( n == 1)
    {
        rec_break++;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] > mx && arr[i] > arr[i+1])
        {
            rec_break++;
        }
        
            mx=max(mx,arr[i]);
        
    }
    
    
    cout<<"\nrec_break: "<<rec_break;
    return 0;
}

