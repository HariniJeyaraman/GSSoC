//Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
/*
A simple method is to do a row wise traversal of the matrix, 
count the number of 1s in each row and compare the count with max. 
Finally, return the index of row with maximum 1s. 
The time complexity of this method is O(m*n) where 
m is number of rows and n is number of columns in matrix.
*/

int find_row(std::vector<std::vector<int>> a)
{
    std::vector<int> row_count(a.size());
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            if(a[i][j]==1)
            {
                //std::cout<<"row : "<<i<<" "<<" pos : "<<j<<"\n";
                row_count[i]=(a[j].size()-j);
                break;
            }
            else
                row_count[i]=0;
        }
    }
    int max = *max_element(row_count.begin(), row_count.end());
    int i;
    for(int i=0;i<row_count.size();i++)
        std::cout<<row_count[i]<<" ";
    std::cout<<"\n";
    for(i=0;i<row_count.size();i++)
    {
        if(row_count[i]==max)
        break;
    }
    return i;
}

int main()
{
    std::vector<std::vector<int> > a;
    a={ {0, 0, 0, 1},  
                    {0, 1, 1, 1},  
                    {1, 1, 1, 1},  
                    {0, 0, 0, 0}};  
    
    std::cout<<"Max row is : "<<find_row(a)<<"\n";
    return 0;
}