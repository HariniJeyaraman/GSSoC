//Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
//Since each row is sorted, we can use Binary Search to count of 1s in each row. 
//We find the index of first instance of 1 in each row. 
//The count of 1s will be equal to total number of columns minus the index of first 1.
#include<iostream>
#include<cstdlib>
#include<vector>

// Function to find the index of first index  
// of 1 in a boolean array arr[]  
int find_first_one_in_row(std::vector<int> a, int beg, int end)
{
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        // Check if the element at middle index is first 1  
        if((mid==0||a[mid-1]==0) && a[mid]==1)
            return mid;
        //If the element is 0, recur for right side 
        else if(a[mid]==0)
            beg=mid+1;
        // If element is not first 1, recur for left side 
        else
            end=mid-1;
    }
    return -1;
}

int find_row(std::vector<std::vector<int>> a)
{
    int max_row_count=-1,max_row_index=0;
    int col = a[0].size();
    // Traverse for each row and count number of 1s  
    // by finding the index of first 1  
    for(int i=0;i<a.size();i++)
    {
       int index = find_first_one_in_row(a[i],0,a[0].size()-1);
        if(index!=-1 && (col-index > max_row_count))
        {
            max_row_count=a[0].size()-index;
            max_row_index=i;
        }
    }
    return max_row_index;
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