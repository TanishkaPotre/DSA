/*
Second Largest Element in an Array

Approach 1: Sorting
Sort the array and find the element smaller than the largest.

Time Complexity: O(n log n)
Space Complexity: O(1)

Approach 2: Two Pass Traversal
1st pass -> Find largest element
2nd pass -> Find the largest element that is not equal to the largest

Time Complexity: O(2n)
Space Complexity: O(1)

Approach 3: One Pass Traversal (Optimal)
Traverse the array only once while maintaining two variables:
1. largest (lar)
2. second largest (slar)

If the current element is greater than largest:
    update second largest = largest
    update largest = current element

Else if the current element is smaller than largest but greater than second largest:
    update second largest

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/* ---------- Approach 1 : Sorting ---------- */
int secondLargest_sort(vector<int> nums)
{
    sort(nums.begin(), nums.end());

    int largest = nums[nums.size() - 1];

    for(int i = nums.size() - 2; i >= 0; i--)
    {
        if(nums[i] != largest)
        {
            return nums[i];
        }
    }

    return -1;
}


/* ---------- Approach 2 : Two Pass ---------- */
int secondLargest_twoPass(vector<int>& nums)
{
    int largest = nums[0];

    // First pass → find largest
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    int secondLargest = -1;

    // Second pass → find second largest
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != largest && nums[i] > secondLargest)
        {
            secondLargest = nums[i];
        }
    }

    return secondLargest;
}


/*-------------Approach 3 : One Pass (Optimal)-------------------------*/
int secondlargest_onepass(vector<int> nums)
{
    int lar = nums[0];
    int slar = -1;

    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] > lar)
        {
            slar = lar;
            lar = nums[i];
        }
        else if(nums[i] < lar && nums[i] > slar)
        {
            slar = nums[i];
        }
    }

    return slar;
}


int main()
{
    vector<int> nums = {8, 8, 7, 6, 5};

    cout << "Approach 1 (Sorting) Second Largest = "
         << secondLargest_sort(nums) << endl;

    cout << "Approach 2 (Two Pass) Second Largest = "
         << secondLargest_twoPass(nums) << endl;

    cout << "Approach 3 (One Pass) Second Largest = "
         << secondlargest_onepass(nums);

    return 0;
}
