//Given an integer n, find each x such that:
//0<=x<=n and n+x=n^x

#include<iostream>
#include<cstdlib>
#include<vector>

//Naive method
long sum_xor1(long n)
{
    long count=0;
    for(long i=0;i<=n;i++)
    {
        if((n^i)==n+i)
            count++;
    }
    return count;
}

//Bit Manipulation
//the count of numbers less than the number ’n’ whose sum and XOR are equal is 2^(number of zeroes)

long sum_xor2(long n)
{
    //counting number of 0's or unset bits
    long count=0;
    while(n>0)
    {
        if((n&1)==0)
            count++;
        n=n>>1;
    }
    return (1L<<count);
}


int main()
{
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    std::cout<<" total number of integers x satisfying the criteria. : "<<sum_xor1(n)<<"\n";
    std::cout<<" total number of integers x satisfying the criteria. : "<<sum_xor2(n)<<"\n";
    return 0;
}

