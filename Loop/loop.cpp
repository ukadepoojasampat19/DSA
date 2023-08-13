// Q- check whetehre the number is prime or not
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int n,flag=0;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(int i=2;i<sqrt(n);i++)
//     {

//         if(n%i == 0)
//         {
//             cout<<"Number non prime";
//             flag=1;
//             break;
//         }
        
//     }
//     if(flag==0)
//     {
//          cout<<"Prime number";
//     }
//     return 0;
// }

// Q- reverse the number.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,reverse=0;
//     cout<<"Enter the number: ";
//     cin>>n;
//     while(n>0)
//     {
//         int lastdigit  =n%10;
//         reverse=reverse*10 + lastdigit;
//         n= n/10;

//     }
//     cout<<reverse;
//     return 0;
// }

// Q-find the given number is armstrong number or not.
// when you add any number and cube of each digit and add them you will get the intial number choosen;
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int n,store;
//     int sum=0;
//     cout<<"Enter the number: ";
//     cin>>n;
//     store=n;
//     while(n>0)
//     {
//         int lastdigit=n%10;
//         sum=sum +pow(lastdigit,3);
        
//         n=n/10;
        
//     }
//     if(sum == store)
//     {
//         cout<<"Given number is armstrong number";
//     }
//     else{
//         cout<<"not armstrong number";
//     }
//     return 0;
// }

// Q-the interval is given find the prime number in between the interval
/*#include<iostream>
using namespace std;

 int main()
 {
     int a,b,flag=0;
     cout<<"Enter the the interval";
     cin>>a>>b;
     for(int i=a;i<=b;i++)
     {
         if( i==1 || i==0)
         {
            continue;
         }
         flag=0;
        
         for(int j=2;j<=i/2;j++)
         {
             if(i%j == 0)
             {
                 flag=1;
                 break;
             }
         }
         if(flag == 0)
         {
             cout<<i<<" ";
         }
        
     }

     return 0;
}*/

//TIME COMPLEXITY OF THE ABOVE CODE.

/*The outer loop (Loop 1) runs from 'a' to 'b'. So, it runs 'b - a + 1' times.

The inner loop (Loop 2) runs from 2 to 'i/2'. The number of iterations for Loop 2 depends on the value of 'i'.

For each 'i', we are checking divisibility by numbers from 2 to 'i/2'.

The time complexity of the code depends on the number of times the inner loop (Loop 2) runs. For each 'i', the number of iterations for Loop 2 is approximately 'i/2'. So, the overall time complexity of the code can be approximated as follows:

Time complexity ≈ (b - a + 1) * (b/2)*/

//second methode
/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,flag;
    cout<<"Enter the interval: ";
    cin>>a>>" ">>b;
    for(int i=a;i<=b;i++)
    {
        if(i==1 || i==0)
        {
            continue;
        }
        flag=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            {
                flag=1;
                break;
            }

        }
        if(flag == 0)
        {
            cout<<i<<" ";
        }
        
    }
    return 0;
}*/
//TIME COMPLEXITY OF ABOVE CODE

/*The outer loop (Loop 1) runs from 'a' to 'b'. So, it runs 'b - a + 1' times.

The inner loop (Loop 2) runs from 2 to the square root of 'i'. The number of iterations for Loop 2 depends on the value of 'i'.

For each 'i', we are checking divisibility by numbers from 2 to the square root of 'i'.

The time complexity of the code depends on the number of times the inner loop (Loop 2) runs. For each 'i', the number of iterations for Loop 2 is approximately the square root of 'i'. So, the overall time complexity of the code can be approximated as follows:

Time complexity ≈ (b - a + 1) * sqrt(b)*/
/*Q- find the header element(i.e eg{16,17,4,3,5,2} find the header element that the element should be greater than the all element lie on the right side)*/
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of the array:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int i,j;
   for(i=0;i<=size;i++)
   {
     int a=arr[i];
     for( j=i;j<=size;j++)
     {
        if(a < arr[i+1])
        {
            break;
        }
     }
     if( j == size)
     {
        cout<<a;
     }
   }

    return;
}
