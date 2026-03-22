/*Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1


Example 1

Input: nums = [2, 3, 4, 5, 3], target = 3

Output: 1

Explanation:

The first occurence of 3 in nums is at index 1*/

#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int>& nums,int target)
{

    for(int i=0;i<nums.size();i++)
    {
        if(target==nums[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector <int> nums={2,3,4,5,3};
    int target;
    cout<<"Enter target :";
    cin>>target;

    if(linear_search(nums,target)!=-1)
    {
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
    
    return 0;
}
