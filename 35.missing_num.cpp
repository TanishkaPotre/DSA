#include <iostream>
#include <vector>
using namespace std;

/*int missing_num(vector<int> & nums)
{
    int found;

    for(int i=0;i<nums.size();i++)
    {
        found=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==i)
            {
                found=1;
                break;
            }
        }
        if(found==0)
            {
                return i;
            }
    }

}*/

/*int missing_num(vector<int> & nums)
{
    int *hasharr = new int[nums.size()+1];

    // Initialize hash array
    for(int i = 0; i <= nums.size(); i++)
    {
        hasharr[i] = 0;
    }

    // Mark present elements
    for(int i = 0; i < nums.size(); i++)
    {
        hasharr[nums[i]] = 1;
    }

    // Find missing number
    for(int j = 0; j <= nums.size(); j++)
    {
        if(hasharr[j] == 0)
        {
            return j;
        }
    }

    return -1;
}*/


// Optimal Approach (Sum Formula)
int missing_num(vector<int> &nums)
{
    int n = nums.size();

    // Expected sum from 0 to n
    int expected_sum = n * (n + 1) / 2;

    int addition = 0;

    // Calculate actual sum
    for(int i = 0; i < nums.size(); i++)
    {
        addition = addition + nums[i];
    }

    // Missing number
    return expected_sum - addition;
}

int main()
{
    vector <int> nums={0,1,2,3,5,6};

    int i=missing_num(nums);
    cout<<"Missing num="<<i;

    return 0;
}
