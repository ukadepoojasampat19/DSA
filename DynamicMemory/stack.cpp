/*1)stack has a finite space it maybe overflow. called as stackOverflow
generally occurs in context of recurrsion.
2)linear data structure.
3)push(),pop(),top(),isEmpty(),size()
4)types of stack: fixed size and dynamic stack->implemented using linkedList
5)stack using array and linked list.
6)monotonic stack: using a monotonic stack include finding the nearest smaller element on the left or right side of an array element, finding the maximum area of a histogram, and solving the sliding window maximum problem
                 : a monotonic stack allows us to avoid nested loops and unnecessary comparisons
                 :A stack is called a monotonic stack if all the elements starting from the bottom of the stack is either in increasing or in decreasing order.*/

                 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={2,1,2,4,3};
    int ans[5];
    stack<int> s;
    
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<len;
    for(int i=len;i>0;i--)
    {
        if(s.empty())
        {
            s.push(arr[i]);
            ans[i]=-1;
        }else
        {
            while(!s.empty() && arr[i] > s.top())
            {
             
                      s.pop();
                
              
                
            }
            if(s.empty())
            {
                ans[i]=-1;
            }
            else
            {
                ans[i]=s.top();
            }
            s.push(arr[i]);
            
        }
    }
    cout<<"\n";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    
    }
    return 0;
}