//Power of number (X) raised to another number (Y)
#include<cstdlib>
#include<iostream>
//O(y)
int power(int x, int y)
{
    int res=1;
    while(y>0)
    {
        res = res*x;
        y--;
    }
    return res;
}

int main()
{
    int a,b;
    std::cin>>a>>b;
    std::cout<<"The power of "<<a <<" raised to "<<b<<" is : "<<power(a,b)<<"\n";
    return 0;
}