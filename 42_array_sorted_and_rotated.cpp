#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution
{
    public:

    bool rotated(vector<int>& nums)
    {
        int count=0;
        int n=nums.size();
        int i;
        for(i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            {
                count++;
            }
        }
        if(nums[n-1]>nums[0])
        {
            count++;
        }
        return count<=1;

    }
};

int main()
{
    int i,x;
    int n;
    cout<<"Enter number of elements=";
    cin>>n;
    vector <int> num;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter num=";
        cin>>x;
        num.push_back(x);
    }

    Solution soln;
    bool sor=soln.rotated(num);
    cout<<"Array is sorted or not:"<<sor;

    return 0;
}