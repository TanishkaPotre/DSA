/*--------------------------------------------------------------

Problem: Move Zeroes

Given an integer array nums, move all 0's to the end of the array
while maintaining the relative order of the non-zero elements.
The operation must be performed in-place without using extra space.

Example:
Input  : [0,1,0,3,12]
Output : [1,3,12,0,0]

---------------------------------------------------------------

Approach : Optimal (Two Pointer - Swap Technique)

Idea:
Use two pointers.

i → position where the next non-zero element should be placed  
j → scanning pointer that traverses the array

Whenever nums[j] is non-zero, swap nums[i] and nums[j] and
move i forward. This pushes all non-zero elements to the
front while zeros automatically move toward the end.

Time Complexity:
O(N)

Space Complexity:
O(1)

--------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

void movezeroes(vector<int>& nums)
{
    int i = 0; 

    for(int j = 0; j < nums.size(); j++) 
    {
        if(nums[j] != 0)
        {
            swap(nums[i], nums[j]); 
            i++;
        }
    }
}

int main()
{
    vector<int> nums = {0,1,0,3,12};

    movezeroes(nums);

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
