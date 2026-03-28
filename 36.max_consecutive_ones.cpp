/*Given a binary array nums, return the maximum number of consecutive 1's in the array.
Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of 
consecutive 1s is 3.*/

#include <iostream>
#include <vector>
using namespace std;

int consecutive_ones(vector <int>&nums)
{
    int curr=0,prev=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1)
        {
            curr++;
        }
        else if(nums[i]==0)
        {
            if(prev<curr)
            {
                prev=curr;
            }
            curr=0;
            
        }

    }
    return max(prev,curr);
}



int main()
{
    vector <int>nums={1,1,1,0,1};

    int i=consecutive_ones(nums);
    cout<<"Max consecutive ones are="<<i;

    return 0;
}
