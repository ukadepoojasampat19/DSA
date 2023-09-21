//write a program to check whetehr the given number is power of 2 ;

//normal case .
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num;

     int a=( num / 2 );
    if( a % 2 == 0)
    {
        cout<<"number is power of 2.";
    }
    else
    {
        cout<<"number is not power of two.";
    }
    return 0;
}

//bit manipulation .
#include<iostream>
using namespace std;

int powerOfTwo(int n)
{
    return  (n && !(n & (n-1)));
}
int main()
{
    cout<<powerOfTwo(15);
   
    return 0;
}

//write a program to count the number of 1s in binary representation of the given number.
//(n and n-1 has the same bit as n except the rightmost set bit.)\

//repeat the process till we get the  zero.
#include<iostream>
using namespace std;

int opration(int n)
{
   
    int count=0;
  
    while(n != 0)
    {
          count++;
         n=n & (n-1);
     
         
    }
    return count;
  
}
int main()
{
    cout<<opration(15);
   
    return 0;
}

//write  a program to generate all possible subset of a set .
/*
if object come: represent it by 1
otherwise represent it by 0;
no of subst form will be 2^n
*/

#include<iostream>
using namespace std;
void subSet(int arr[],int n)
{
    for(int i=0;i < (1 << n) ;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( i & (1 << j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    
    int arr[]={1,2,3,4};
    subSet(arr,4);
    return 0;
}
//swap the number without using third varibale and used any inbuild function
//sql :join and subquery.
//reversed the given stringb without using any inbuild function.
//software development life cycle.
//write a program to find the missing number in an array.

//write a program to find the unique number in an array where all numbers except one ,are present twice.

 //solve using XOR bitwise oprator

 /* Online C++ Compiler and Editor */
#include <iostream>

using namespace std;

int unique(int arr[], int size_arr)
{
       int xore=0;
       for(int i=0;i<size_arr;i++)
       {
           xore=xore^arr[i];
           
       }
        return xore;
}
   
int main()
{
   int arr[]={1,2,3,4,1,2,3};
   int size_arr=sizeof(arr)/sizeof(arr[0]);
   cout<<unique(arr,size_arr);
   
   return 0;
}


//write a program to find two  unique number in an array where all numbers except two  ,are present twice.
 
//step 1:first perform the xor opration on each element (ans will the xor of two unique number.)
// step 2:perform the xor opration again to those element of the array who have the same 1s presenet at the place where they are  at the main ans place.
// step 3:perform the xor opration on ans of step 1 and step 2.

#include<iostream>
using namespace std;

int setBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

void unique(int arr[8],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}

int main()
{
    int arr[]={1,2,3,1,2,3,5,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    unique(arr,len);
    return 0;
}

//find the program to find the unique number in an array where all nume except one,are present thrice.
//find the program to find the unique number in an array where all nume except one,are present thrice.

//step1: find the binary representaion of all the numbers;
//step2: placed the number in 
#include<iostream>
using namespace std;

bool getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return (n | (1<<pos));
}

int unique(int arr[], int n)
{
    int result=0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{
   int arr[]={1,2,3,4,1,2,3,1,2,3};
   cout<<unique(arr,10)<<"\n";
}
