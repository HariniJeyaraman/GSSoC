//Finding prime numbers less than a given  number in O(n*n^1/2) = O(n^3/2)
#include<iostream>
#include<cstdlib>
#include<math.h>

void prime_numbers(int n)
{
    for(int i = 2; i <= n; i++)
    {
        bool prime = true;
        for(int j = 2; i <= sqrt(i); j++)
        {
            if(i%j == 0)
                prime = false;
        }
        if(prime)
            std::cout<<i<<" ";
    }
}

int main()
{
    int n;
    std::cout<<"Enter the number \n";
    std::cin>>n;
    prime_numbers(n);
    return 0;
}