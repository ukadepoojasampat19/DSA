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
