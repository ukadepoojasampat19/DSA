//Binary Search

#include<iostream>
using namespace std;

void binary_search(int arr[],int n,int element)
{
    int divide_num=n/2;
   // cout<<"\nMiddle Element: "<<divide_num<<"="<<a;
    if( arr[divide_num] == element)
    {
        cout<<"\nIndex_no-"<<divide_num<<": "<<element<<"\n";
    }
    else if(arr[divide_num] < element )
    {
        for(int i=0;i<divide_num-1;i++)/*there is no need of for loop here but still its working .*/
        {
            //divide_num=divide_num/2;
            
             binary_search(arr,divide_num,element);
        }
    }
    else if(arr[divide_num] > element)
    {
        for(int i=divide_num+1;i<n-1;i++)/*no need of forloop*/
        {
             //divide_num=divide_num/2;
             binary_search(arr,divide_num,element);
        }
    }
    else
    {
        cout<<"Element Does not match.";
    }
}
    
int main()
{
    int n,element;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search: ";
    cin>>element;
    binary_search(arr,n,element);
    
    return 0;
}
//TIME COMPLEXITY: O(log(n))

//2 apprach
/*
#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int element)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
       
        int divide_num=(s+e)/2;
   // cout<<"\nMiddle Element: "<<divide_num<<"="<<a;
        if( arr[divide_num] == element)
        {
          return divide_num;
        }
        else if(arr[divide_num] < element )
         {
              e=n-1;
        
        }
        else if(arr[divide_num] > element)
        {
              s=n+1;
        }
        else
        {
            return -1;
        }
    }
    
    
}
    
int main()
{
    int n,element;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search: ";
    cin>>element;
    cout<<binary_search(arr,n,element);
    
    return 0;
}
*/
//TIME COMPLEXITY: O(log(n))

