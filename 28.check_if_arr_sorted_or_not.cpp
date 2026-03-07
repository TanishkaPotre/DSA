/*
Check if Array is Sorted

Given an array nums of n integers, return true if the array 
is sorted in non-decreasing order, otherwise return false.

Approach:
Traverse the array once and compare every element with its previous element.
If at any point nums[i] < nums[i-1], it means the order is violated,
so the array is not sorted.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

bool isSorted(int nums[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(nums[i] < nums[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *nums = new int[n];

    cout << "Enter n numbers: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    bool ans = isSorted(nums, n);

    if(ans)
        cout << "Array is sorted in non-decreasing order";
    else
        cout << "Array is not sorted";

    return 0;
}
