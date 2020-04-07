//Printing all prime numbers less than a given number
//O(n^2)
#include<iostream>
#include<cstdlib>

void prime(int n)
{
    for(int i=2;i<=n;++i)
    {
        bool prime = true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=false;
                break;//to reduce the number of operations
            }
        }
        if(prime)
            std::cout<<i<<" ";
    }
    
}

int main()
{
    int n;
    std::cout<<"Enter a number : \n";
    std::cin>>n;
    prime(n);
    return 0;
}