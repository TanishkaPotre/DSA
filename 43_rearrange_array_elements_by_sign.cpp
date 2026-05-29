#include <iostream>
#include <vector>
using namespace std;

class Sol
{
    public:

    /*Brute approach
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else 
            {
                neg.push_back(nums[i]);
            }
        }

        for(int i=0;i<n/2;i++)
        {
            nums[2*i]=pos[i];
            nums[(2*i)+1]=neg[i];
        }

        return nums;
        
    }*/

    /*Optimal approach*/
    vector<int> rearrangeArray(vector<int> nums)
    {

		int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
        	ans.push_back(0);
		}
        int pos=0,neg=1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else{
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cout<<"Enter number of elements=";
    cin>>n;
    vector<int> nums;
    int i,x;
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter num=";
        cin>>x;
        nums.push_back(x);
    }

    Sol soln;
    vector<int> ans=soln.rearrangeArray(nums);
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
