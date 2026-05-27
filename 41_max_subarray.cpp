#include <iostream> 
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    /*Better approach
    int maxSubArray(vector<int>& nums) {

        int maxL,j,i,sum=0;
        maxL=INT_MIN;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=i;j<n;j++)
            {
                sum+=nums[j];
                maxL=max(sum,maxL);
            }

        }
        return maxL;
    }*/
    /*Brute force approach
    int maxSubArray(vector<int>& nums)
    {
        int maxSum,i,j,k,sum;
          maxSum = INT_MIN;
          for(i=0;i<nums.size();i++)
          {
            for(j=i;j<nums.size();j++)
            {
              sum = 0;
              for(k=i;k<=j;k++)
              {
                sum = sum + nums[k];
                maxSum = max(sum,maxSum);
              }
            }
          }
          return maxSum;
    }*/

    //Kadane algo(optimal approach)
    int maxSubArray(vector<int> nums)
    {
        int maxi=INT_MIN,sum=0;

        int i,n=nums.size();
        
        for(i=0;i<n;i++)
        {
            sum+=nums[i];

            if(maxi<sum)
            {
                maxi=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        if(maxi<0)
        {
            return 0;
        }
        return maxi;
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
    int val=soln.maxSubArray(num);
    cout<<"Max sum="<<val;

    return 0;
}