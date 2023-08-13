/*find the minimum element from the unsorted ARRAY and placed at the beginning of teh array*/
/*#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    int temp;
    
    for(int i=0;i<n;i++)
    {
       
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
        cout<<"\nSorted array:\n";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nSorted array:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    
    return 0;
}
*/
// Time Complexcity: o(n^2);
// Question: 15 chocklates

/*1 chocklate for 1 rupess.
if 3 chocklate wrapper is given the 1 chocklate can by 
then how many chocklate can buy.*/
// ans -> 22 chocklates.
