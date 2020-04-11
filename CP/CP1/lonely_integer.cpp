/*
Consider an array of integers where all but one of the integers occur in pairs. 
In other words, every element occurs exactly twice except for one unique element. Find the unique element.
*/
#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

int lonely_integer1(std::vector<int> a)
{
    std::sort(a.begin(),a.end());
    int i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==a[i+1])
            continue;
        if(i>0 && a[i]==a[i-1])
            continue;
        break;
    }
    return a[i];
}

//Using bit manipulation
int lonely_integer2(std::vector<int> a)
{
    int result=0;
    for(int element : a)
    {
        result^=element;
    }
    return result;
}

int main()
{
    std::vector<int> a={1,1,2,8,3,8,2,6,7,6,3};
    std::cout<<"Lonely integer is : "<<lonely_integer1(a)<<"\n";
     std::cout<<"Lonely integer is : "<<lonely_integer2(a)<<"\n";
    return 0;
}