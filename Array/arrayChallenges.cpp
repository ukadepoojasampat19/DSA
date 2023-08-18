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
// 5 ) First repeating element in the array.
/*Given an array arr[] of size N. The task is to find the first repeating element in the array of
integers, i.e, an element that occurs more than once and whose index of first occurrence is smallest.
Constraints: 1<=N=10^6
            0<=Ai<=10^6*/

//1st approch
// |1|5|3|4|3|5|6| :Given array
// |-1|-1|-1|-1|-1|-1|-1|
// |-1 |0 |-1 |2 |3|1 |6 |

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N;i++)
    {
        idx[i] =-1;
    }

    int minidx = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
     if(minidx == INT_MAX)
     {
        cout<<"-1"<<endl;
     }
     else{
        cout<< minidx + 1 <<endl;
     }
    return 0;
}

//2nd approach 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],ans;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                ans=i;
               break; 
            }
        }
    }
    cout<<ans<<"";
    return 0;
}
//6) Subarray with Given Sum

/*Given an unsorted array A of size N of non-negative integers,find a continuous subarry
which adds to a given number S.
Constraints:
1<=N<=10^5.
0<=Ai<=10^10.*/
//BRUTE FORCE
/*Find sum of all possible subarrays. if any of the sum equates to S, output he starting 
and ending index of the subarray
TIME COMPLEXITY: O(n^2)*/ 
/*
#include<iostream>
using namespace std;

int main()
{
    int n,num,total_sum,curr_count=0;
    cout<<"the size of the arr : ";
    cin>>n;
    cout<<"\nEnter the number:";
    cin>>num;
    int arr[n];
    cout<<"Enter the elements of the array: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k,j;
    total_sum = arr[0];
    for(k=0;k>n;k++)
    {
        if(total_sum == num)
        {
            curr_count++;
            cout<<curr_count<<" :no of subarray form\n";
            cout<<"index no : "<<k<<" "<<j;
            cout<<"\n";
        }
        for(j=1;j<n;j++)
        {
            total_sum = total_sum + arr[j];
            while(total_sum > num)
            {
                j--;
                total_sum = total_sum - arr[j];
            }
            if(total_sum ==  num)
            {
                curr_count++;
                cout<<curr_count<<" :no of subarray form\n";
                cout<<"index no :" <<k<<"and "<<j;
                cout<<"\n";
                break;
            }
           
        }
    }
    return 0;
}
//2 pproach

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n,s;
    cin>>n >> s;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0, j=0, st=-1, ed=-1, sum=0;
    while(j<n && sum+a[j] <= s)
    {
        sum+=  a[j];
        j++;
    }
    if(sum == s)
    {
        cout<<i+1 <<" "<< j <<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum > s)
        {
            sum-=a[i];
            i++;
        }
        if(sum == s)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
        
    }
    cout<<st << " "<< en;
    return 0;
}
*/
//7)Smallest positive missing number.
/*You are given an array arr[] of N integers including 0.the task is to find the smallest
positive number missing from the array*/
/*
Constraints:
1 <=N <= 10^6;
-10^6 <= Ai <=10^6;
*/
/*
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n,h;
    cout<<"Entre the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    const int m= 1e6 + 2;
    bool check[m];
    for(int i=0;i<m;i++)
    {
        check[i]= false;
    }
    for(int k=0;k<n;k++)
    {
        if(arr[k] >= 0)
        {
            check[arr[k]] = true;
        }
    }
    bool status = false;
    int var=-1;
    for(h=0;h<m;h++)
    {
        if(check[h] == false)
        {
            status=true;
            var=h;
            break;
        }
       
    }
    cout<<var;
   
    
    
    
    return 0;
}
*/
