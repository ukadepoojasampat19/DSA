
//get bit.
#include<iostream>
using namespace std;

int getBit(int n,int pos)
{
    return (n & (1 << pos)!=0);
}
int main()
{
    cout<<getBit(5,2);
    
    return 0;
}
//explanation .
/*1 << i means shifting the digit 1 to the left by i positions. This creates a binary number with a 1 at the i-th position from the right (assuming positions start from 0 on the right side).

For example, if i is 2, 1 << 2 becomes 0100 because we've shifted the 1 two positions to the left.

n & (1 << i) means performing a bitwise AND operation between n and the result of shifting 1 by i positions.

For example, if n is 0101 and i is 2:

1 << 2 becomes 0100.
0101 & 0100 is 0100.
If n & (1 << i) != 0, it means that the i-th bit in the binary representation of n is set to 1. In other words, that specific bit is 1.*/

//set bit.

#include<iostream>
using namespace std;

int setBit(int n,int pos)
{
    return (n | (1 << pos));
}

int main()
{
    cout<<setBit(5,2);

    return 0;
}

//clear bit 

#include<iostream>
using namespace std;
int clearBit(int n, int pos)
{
   int a= ~(1 << pos);
  
   return ( n & a);
}
int main()
{
    cout<<clearBit(5,0);

    return 0;
}

//update the bit .
//1)clear opreation 
//2)or opreation to update the bit .
#include<iostream>
using namespace std;

int updateBit(int n,int pos,int value)
{
    int a =~(1 << pos);
    int clear_result= (n & a);
    return (clear_result | (value << pos) );
}

int main()
{
   cout<<updateBit(5, 1, 1);
    return 0;
}