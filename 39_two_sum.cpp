#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*Brute force approach
vector<int> two_Sum(vector<int> num, int target)
{
    int i, j;
    int n = num.size();

    vector<int> arr(2);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(num[i] + num[j] == target)
            {
                arr[0] = i;
                arr[1] = j;
            }
        }
    }

    return arr;
}*/
//Better approach
vector<int> two_Sum(vector<int> num,int target)
{
    map<int,int> hashmap;
    vector<int> arr(2);
    int i,n=num.size();
    arr[0]=-1;
    arr[1]=-1;
    int x;
    for(i=0;i<n;i++)
    {
        x=target-num[i];

        if(hashmap.find(x)!=hashmap.end())
        {
            arr[0]=hashmap[x];
            arr[1]=i;
            return arr;
        }

        hashmap[num[i]]=i;
    }

    return arr;

}

int main()
{
    int n,x,target,i;
	vector <int> arr;
	vector <int> ans;
	cout<<"\nEnter the number of elements required in array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter a number: ";
		cin>>x;
		arr.push_back(x);
	}
	cout<<"\nEnter the value of target (for sum): ";
	cin>>target;
	ans=two_Sum(arr,target);
	cout<<"\nThe indices are: "<<ans[0]<<", "<<ans[1];
    return 0;
}