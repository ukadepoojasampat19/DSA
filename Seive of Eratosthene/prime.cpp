//seive of Eratosthnis principle tell us that :marked all the facors of the number starting from 2 as it the starting prime number.
//step 1:start from first prime number.
//step 2: mark all the number divisble by a number except all that are already mark.
//step 3: remaning will be the prime number .


//Seive of Eratosthnis principle tell us that :marked all the facors of the number starting from 2 as it the starting prime number.
//step 1:start from first prime number.
//step 2: mark all the number divisble by a number except all that are already mark.
//step 3: remaning will be the prime number .
#include<iostream>
using namespace std;

void find_prime(int num)
{
    int arr[100]={0};
    for(int i=2;i<=num;i++)
    {
        for(int j=i*i;j<=num;j+=i)
        {
            if(arr[j] == 0)
            {
                arr[j] = 1;
            }
        }
    }
    for(int i=2;i<num;i++)
    {
        if(arr[i] == 0)
        {
            cout<<i<<" ";
        }
    }
    
}
int main()
{
    int num;
    cin>>num;
    find_prime(num);
    return 0;
}

//prime factorization using Sieve.

#include<iostream>
using namespace std;

void primefactor(int n)
{
    int spf[100]={0};
    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }

    for(int i=2;i<=n;i++)
    {
        if(spf[i] == i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j] == j){
                    spf[j] = i;  
                }
            }
        }
    }

    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n= n/(spf[n]);
    }

}
int main()
{
    int n;
    cin>>n;

    primefactor(n);

    return 0;
}
