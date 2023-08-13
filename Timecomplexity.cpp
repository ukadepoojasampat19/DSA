// 1)find the time complexity of func1 function.

#include<iostream>
using namespace std;
void func1(int arr[],int length)
{
    int sum=0;
    int product =1;          /*k1 times constant*/
    for(int i=0;i<length;i++)
    {
        sum+=arr[i]; /* k2 times*/
    }  /*k2n times*/
    for(int i=0;i<length;i++)
    {
        product+=arr[i]; 
     } /*k3n time*/
}
int main()
{
    int arr[]={3,5,36};
    func1(arr,3);
    return 0;
}
// ->  o(n) == o(length)

// 2)find the time complexity of func1 function.


void funct(int n)
{
    int sum=0;
    int product =1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<i<<j;
        }
    }
    
}
// ->0(n^2);
/*3) consider the recurrsive algorithm below where the random(int n)spends one unit time to return 
a random integer which is evenly distributed within the range[0,n][0,n]. if the average time is T(n)
,what is the value of T(6)?*/

int function(int n)
{
    int i;
    if(n<=0)
    {
        return 0;
    }
    else{
        i= random(n-1);
        return function(i) + function(n-1-i);
    }
}
