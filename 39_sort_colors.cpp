#include <iostream>
#include <vector>
using namespace std;
/*Brute approach
void sortColors(vector<int>& nums) 
{
    int i,j;
    int n=nums.size();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]>nums[j])
            {
                swap(nums[i],nums[j]);
            }
        }

    }        
}*/
/*Better approach
void sortColors(vector<int>& nums)
{
    int c1=0,c2=0,c3=0;

    int i,n=nums.size();
    for(i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            c1++;
        }
        else if(nums[i]==1)
        {
            c2++;
        }
        else if(nums[i]==2)
        {
            c3++;
        }
    }

    for(i=0;i<c1;i++)
    {
        nums[i]=0;
    }
    for(i=c1;i<c2+c1;i++)
    {
        nums[i]=1;
    }
    for(i=c2+c1;i<n;i++)
    {
        nums[i]=2;
    }


}*/
/**/
void sortColors(vector <int>& nums)
{
    int n=nums.size();
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else if(nums[mid]==2)
        {
            swap(nums[mid],nums[high]);
            high--;
        }

    }
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

    sortColors(arr);

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}