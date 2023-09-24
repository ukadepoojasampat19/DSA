//how many numbers between 1 and 1000 are divisible by 5 or 7 or both.
#include<iostream>
using namespace std;

int main()
{
    int cf=0,cs=0,fs=0;
    for(int i=0;i<1000;i++)
    {
        if( i%5 == 0)
        {
            cf++;
        }
        else if( i%7 == 0)
        {
            cs++;
        } 
        else if ( i%5==0  && i%7==0)
        {
            fs++;
        }
    }
    cout<<"number divisible by five: "<<cf<<endl;
    cout<<"number divisible by seven: "<<cs<<endl;
    cout<<"number divisible by both: "<<fs<<endl;

    return 0;
}
//Euclid algorithm to find the GCD of two number .
//two ways 1) by subtraction and second by deivision.

#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int rem;
    while(b !=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
   
}
int main()
{
    cout<<gcd(42,24);
    return 0;
}
