/*--------------------------------------------------------------

Problem: Remove Duplicates from Sorted Array

Given an integer array nums sorted in non-decreasing order,
remove duplicates in-place such that each unique element
appears only once and return the number of unique elements (k).

---------------------------------------------------------------

Approach 1 : Brute Force (Using Set)

Idea:
Insert all elements into a set. A set automatically removes
duplicates and stores only unique values. Then copy those
unique elements back to the original array.

Time Complexity:
O(N log N)  -> each insertion into set takes log N

Space Complexity:
O(N) -> extra space used by set


Approach 2 : Optimal (Two Pointer Technique)

Idea:
Since the array is already sorted, duplicates will always
appear next to each other. Use two pointers:

i -> points to the last unique element
j -> scans the array

Whenever nums[j] is different from nums[i], move i forward
and place nums[j] at that position.

Time Complexity:
O(N) -> single pass through the array

Space Complexity:
O(1) -> no extra space used

--------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;


/*--------------- Approach 1 : Brute Force --------------------*/
int remove_duplicates_set(vector<int> &nums)
{
    set<int> num;

    for(int i = 0; i < nums.size(); i++)
    {
        num.insert(nums[i]);  
    }

    int index = 0;

    for(auto it : num)
    {
        nums[index] = it;      
        index++;
    }

    return index;              // number of unique elements
}


/*--------------- Approach 2 : Optimal (Two Pointer) ----------*/
int remove_duplicates_optimal(vector<int> &nums)
{
    int i = 0;  

    for(int j = 1; j < nums.size(); j++)  
    {
        if(nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j]; 
        }
    }

    return i + 1;  // total unique elements
}


int main()
{
    vector<int> nums = {1,1,2,2,2,3,3};

    int k = remove_duplicates_optimal(nums);

    cout << "Unique elements: " << k;
    cout << "\nNew array: ";

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
