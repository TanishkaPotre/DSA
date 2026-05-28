#include <iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int buy_sell_stock(vector<int> prices)
    {
        int cost,i;
        int mini=prices[i];
        int maxPro=0;

        for(i=0;i<prices.size();i++)
        {
            cost=prices[i]-mini;
            maxPro=max(maxPro,cost);
            mini=min(mini,prices[i]);
        }
        
        return maxPro;
    
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
    int pro=soln.buy_sell_stock(num);
    cout<<"Max profit="<<pro;

    return 0;
}