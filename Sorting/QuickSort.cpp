//sorting of array
//step1:left point and right pointer and one pivote elemenet 



#include<iostream>
using namespace std;

void  quick_sort(int arr[],int lp,int rp)
{
    int temp;
    if(lp <= rp)
    {
    int pivote=lp;
    int left=lp+1;
    int right=rp;
    while(left <=right)
    {
        while(left <=right && arr[left]< arr[pivote])
        {
            left++;
        }
        while(left <=right && arr[right]> arr[pivote])
        {
            right--;
        }
        
        if(left <=right)
        {
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
       
       
        
    }
    
        if(left >=right)
        {
            temp=arr[pivote];
            arr[pivote]=arr[right];
            arr[right]=temp;
            
        }
       quick_sort(arr,lp,right-1);
       quick_sort(arr,right+1,rp);
    
    }
    
    /*if(rp >= lp)
    {
        int temp1;
        temp1=pivote;
        pivote=arr[rp];
        arr[rp]=temp1;
    }*/
    
    
    
}
int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"element: ";
        cin>>arr[i];
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<"\n";
    
   quick_sort(arr,0,n-1);
   cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



//Output
Size: 8
element: 35
element: 50
element: 15
element: 25
element: 80
2element: 20
9element: 90
4element: 45
35 50 15 25 80 20 90 45 

15 20 25 35 45 50 80 90 
