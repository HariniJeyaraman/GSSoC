#include<iostream>
#include<cstdlib>
int main()
{
        int num;
        std::cin>>num;
        long long result = 1;
        for(int i=2;i<=num;i++)
        {
            res = res*i;
        }
        cout<<"Factorial is : "<<res<<"\n";
        return 0;
}
//Integer range is upto 10^7 approx
//Factorial of 20 exceeds limit of int and results in Integer overflow and gives a negative result
//So we use long long data type
//TC -> O(num)