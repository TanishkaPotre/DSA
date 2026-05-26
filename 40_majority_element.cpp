#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:

/*Brute approach
    int majorityElement(vector<int>& nums)
    {
        int n = nums.size();

        for(int i =0; i< n;i++)
        {
            int count =0;
            for(int j =0;j<n;j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }

            if(count > n/2)
            {
                return count;
            }
        }
        return -1;
    }
        */

    int majorityElement(vector<int> nums)
    {
        map <int,int> mpp;
        int i,n=nums.size();
        for(i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        for(auto it:mpp)
        {
            if(it.second>(nums.size()/2))
            {
                return it.first;
            }
        }
    }
};


int majorityElement(vector<int> &nums)
{
    int cnt = 0;
		int el,i;
		for(i = 0;i<nums.size();i++)
		{
			if(cnt ==0)
			{
				cnt = 1;
				el = nums[i];
			}
			else if(nums[i]==el)
			{
				cnt++;
			}
			else
			{
				cnt--;
			}
		}
		int cnt1 = 0;
		for(int i = 0;i<nums.size();i++)
		{
			if(nums[i]==el)
			{
				cnt1++;
			}
			if(cnt1 > (nums.size()/2))
			{
				return el;
			}
		}
       	return -1;
}
int main()
{

    int n,i,x;
    vector <int> arr;
    cout<<"\nEnter the number of elements required in array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter a number: ";
		cin>>x;
		arr.push_back(x);
	}

    Solution soln;
    int ct=soln.majorityElement(arr);
    cout<<"majority ocurring element is"<<ct;

    return 0;
}