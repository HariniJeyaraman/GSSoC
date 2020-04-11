//Write an efficient program to count number of 1s in binary representation of an integer.
//https://www.geeksforgeeks.org/count-set-bits-in-an-integer/

#include<iostream>
#include<cstdlib>

//Method 1
//Travers every digits of the number and check if it's 1 and increment the counter
//If (n&1)==1, then the LSB is 1 For ex: If n = 7 (111)
// n&1 = 111 & 001 = 1 => LSB or right-most digit is a 1
unsigned int count_set_bits(unsigned int n)
{
    int count=0;
    while(n)
    {
        count+=n&1;
        n=n>>1;//Instead of n=n/10 (decimal) we do n=n/2 (binary)
    }
}

//Method 2
//Brian Kernighan’s Algorithm:
//Subtracting 1 from a decimal number 
//flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit.
/*So if we subtract a number by 1 and do bitwise & with itself (n & (n-1)), we unset the rightmost set bit. 
If we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count.
The beauty of this solution is the number of times it loops 
is equal to the number of set bits in a given integer.*/

unsigned int count_set_bits(unsigned int n)
{
    unsigned int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    unsigned int n;
    std::cout<<"Enter the number : ";
    std::cin>>n;
    std::cout<<"The number of set bits in the number is : "<< count_set_bits(n)<<"\n";
    return 0;
}