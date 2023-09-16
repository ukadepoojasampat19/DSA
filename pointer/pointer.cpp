/*pointer to pointer*/

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<*p;
    int **q=&p;
    cout<<"\n"<<**q;
    return 0;
}