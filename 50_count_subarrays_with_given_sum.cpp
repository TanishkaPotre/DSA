#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
    public:
    	/*BETTER APPROACH and for brute add one more k loop
        int count_subarrays(vector<int> nums,int k)
        {
            int i,j;
            int count=0,sum=0;
            for(i=0;i<nums.size();i++)
            {
                sum=0;
                for(j=i;j<nums.size();j++)
                {
                    sum+=nums[j];
                    if(sum==k)
                    {
                        count++;
                    }
                }
            }
            
            return count;
        }*/
        
        //OPTIMAL APPROACH
        int longest_subarray(vector <int> nums,int k)
		{
		    unordered_map<int,int> mpp;
		    
		    mpp[0]=1;
		    
		    int prefixsum=0;
		    int cnt=0;
		    
		    for(int i=0;i<nums.size();i++)
		    {
		    	prefixsum+=nums[i];
		    	
		    	int remove=prefixsum-k;
		    	cnt+=mpp[remove];
		    	mpp[prefixsum]+=1;
			}
			return cnt;
		
		
		}
};

int main()
{
    int n;
    cout<<"Enter number of elements in array";
    cin>>n;
    vector<int> nums;
    int i,x;
    for(i=0;i<n;i++)
    {
        cout<<"Enter num=";
        cin>>x;
        nums.push_back(x);
    }

    int k;
    cout<<"Enter k";
    cin>>k;

    Solution soln;
    int count=soln.longest_subarray(nums,k);
    cout<<"Total count="<<count;

    return 0;
}
