

#include <iostream>
#include <vector>
using namespace std;

/*int single_number(vector<int> nums)
{
    for(int i=0;i<nums.size();i++)
    {
        int found=0;
        for(int j=0;j<nums.size();j++)
        {
            if(i!=j && nums[i]==nums[j])
            {
                found=1;
            }
        }
        if(found==0)
        {
            return nums[i];
        }
    }

    return -1;
}*/


/*int single_number(vector<int> nums)
{
    // Find max element
    int max = nums[0];

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }

    // Create hash array of exact size
    int *hasharr = new int[max + 1] {0};

    //Count frequency
    for(int i=0;i<nums.size();i++)
    {
        hasharr[nums[i]]++;
    }

    // Find single element
    for(int i=0;i<=max;i++)
    {
        if(hasharr[i] == 1)
        {
            return i;
        }
    }

    return -1;
}*/

int single_number(vector<int> nums)
{
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        ans=ans^nums[i];
    }
    return ans;
}


int main()
{
    vector<int> nums={1,2,4,2,3,4,1};
    int i=single_number(nums);
    cout<<i;

    return 0;
}
