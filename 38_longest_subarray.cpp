#include <iostream>
#include <vector>
#include <map>
using namespace std;
/*Brute Force approach
int longest_subarr(vector <int> num,int k)
{
    int i,j;
    int n=num.size();
    int sum=0,len=0;

    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+num[j];
            if(sum==k)
            {
                len=max(len,j-i+1);
            }
        }
    }

    return len;

}*/

/*Better Approach and this is optimal approach for +ve -ve and 0 and fpr only +ve its better   

int longest_subarr(vector <int> vct,int k)
{
    map <long long,int> hashmap;
    long long sum=0;
    int maxLen=0;
    int rem,i;
    int n=vct.size();

    for(i=0;i<n;i++)
    {
        sum+=vct[i];

        if(sum==k)
        {
            maxLen=max(maxLen,i+1);
        }
        rem=sum-k;

        if(hashmap.find(rem)!=hashmap.end())
        {
            int len=i-hashmap[rem];
            maxLen=max(maxLen,len);
        }
        if(hashmap.find(sum)==hashmap.end())
        {
            hashmap[sum]=i;
        }
    }

    return maxLen;


}*/


/*Optimal Approach*/

int longest_subarr(vector <int> num,int k)
{
    int left = 0, right = 0;

    int sum = num[0];

    int maxLen = 0;

    int n = num.size();

    while(right < n)
    {
        // Shrink window if sum becomes greater than k
        while(left <= right && sum > k)
        {
            sum = sum - num[left];
            left++;
        }

        // Check if sum becomes equal to k
        if(sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        // Expand window
        right++;

        if(right < n)
        {
            sum = sum + num[right];
        }
    }

    return maxLen;
    
}



int main()
{
    vector <int> num={10,5,2,7,1,9};
    int k;
    cout<<"Enter k=";
    cin>>k;

    int count=longest_subarr(num,k);
    cout<<"Count="<<count;

    return 0;
}