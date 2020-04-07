//Power of integer in O(log n) time
#include<iostream>
#include<cstdlib>

int power(int x, int y)
{
    int res=1;
    while(y>0)
    {
        if(y%2!=0)
        {
            res=res*x;
        }
        x=x*x;
        y/=2;
    }
    return res;
}

int main()
{
    int a,b;
    std::cin>>a>>b;
    std::cout<<"The power is : "<<power(a,b)<<"\n";
    return 0;
}