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
//above program->O(n^3).
//2 approach with optimized time complexity(O(n^2).
//solve by cumulative sum approach .to reduce the time complexity.
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"array size: ";
    cin>>n;
    int arr[n];
    cout<<"Element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int curr_sum[n+1];
    curr_sum[0] = 0;
    for(int i=1;i<=n;i++)
    {
        curr_sum[i]=curr_sum[i-1] + arr[i-1];
    }
    int max_no=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=curr_sum[i] - curr_sum[j];
            max_no=max(sum,max_no);
        }
    }
    cout<<"Maximum number is: "<<max_no;
    
    return 0;
}
//3rd approach with best time complexity i.e O(n).
//kadane's algorithm for maximum subarray sum is used .

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int curr_sum=0;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            curr_sum=0;
        }
        else
        {
            curr_sum+=arr[i];
            
        }
        mx=max(mx,curr_sum);
        
        
    }
    cout<<"MAX sum of subarray is: "<< mx;
    return 0;
}

/*
MAXIMUM CIECULAR SUBARRAY SUM
1)input array element.
2)check for circular subarray
3)reverse the sign of the array element
4)apply kanadas algorithm on array
5)will get non-contributing sum of the element of the array
6)minus the non-contributing sum of element from the  sum of the oroginal array that taken as input.*/
#include<iostream>
using namespace std;

int  kanadas_algorithm(int arr1[],int n)
{
     int curr_sum=0;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr1[i] < 0)
        {
            curr_sum=0;
        }
        else
        {
            curr_sum+=arr1[i];
        }
        mx=max(curr_sum,mx);
    }
    return mx;
}
int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];
    int arr1[n];
    cout<<"Array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //invert sign array
    for(int i=0;i<n;i++)
    {
        if(arr[i]< 0)
        {
            arr1[i]=-1 * arr[i];
        }
        else
        {
            arr1[i]=-1 * arr[i];
        }
       
    }
    int max_no=kanadas_algorithm(arr1,n);
   //sum of original array
  
    int sum=0;
    for(int j=0;j<n;j++)
    {
        sum+=arr[j];
    }
    
    cout<<"\n";
    
    int max_sum=sum + max_no;
    cout<<"max_sum: "<<max_sum;
    return 0;
}
/*
PAIR SUM PROBLEM.
check if there exits two elements in an array such that there sum is equal to k
*/
#include<iostream>
using namespace std;

bool pair_sum(int arr[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == k)
            {
                cout<<i<<" "<<j<<"\n";
                return true;
            }
            
        }
    }
    return false;
}
int main()
{
    int n,k;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter the which you want to compare: ";
    cin>>k;

    int arr[n];
    int sum=0;
    cout<<"entre the element :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<pair_sum(arr,n,k);
    
    return 0;
}
//TIME COMPLEXITY of the above is O(n^2)
//We can reduce the time complexity by using two pointer approach.
//CONDITION: array should be sorted.
//THEN TIMECOMPEXITY BECOME O(n).

#include<iostream>
using namespace std;
bool  pair_sum(int arr[],int n,int k)
{
    int i,j;
    i=0;
    j=n-1;
    while(i<j)
    {
        if(arr[i] + arr[j] < k)
        {
            i++;
        }
        else if(arr[i] + arr[j] == k)
        {
            cout<<i<<" "<<j<<"\n";
            return true;
        }
        else
        {
            j--;
        }
       
    }
    return false;
}
int main()
{
    int n,k;
    cout<<"Enter the array size and compare number; ";
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<pair_sum(arr,n,k);
    return 0;
}
