/*--------------------------------------------------------------

Problem: Union of Two Sorted Arrays

Approach: Two Pointer + Merge (3 Conditions)

Conditions:
1. nums1[i] < nums2[j]
2. nums1[i] > nums2[j]
3. nums1[i] == nums2[j]

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)

--------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2)
{
    int i = 0, j = 0;
    vector<int> ans;

    while(i < nums1.size() && j < nums2.size())
    {
        if(nums1[i] < nums2[j])
        {
            if(ans.empty() || ans.back() != nums1[i])
            {
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else if(nums1[i] > nums2[j])
        {
            if(ans.empty() || ans.back() != nums2[j])
            {
                ans.push_back(nums2[j]);
            }
            j++;
        }
        else
        {
            if(ans.empty() || ans.back() != nums1[i])
            {
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }

    // Remaining elements of nums1
    while(i < nums1.size())
    {
        if(ans.empty() || ans.back() != nums1[i])
        {
            ans.push_back(nums1[i]);
        }
        i++;
    }

    // Remaining elements of nums2
    while(j < nums2.size())
    {
        if(ans.empty() || ans.back() != nums2[j])
        {
            ans.push_back(nums2[j]);
        }
        j++;
    }

    return ans;
}

int main()
{
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {1,2,7};

    vector<int> ans = unionArray(nums1, nums2);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
