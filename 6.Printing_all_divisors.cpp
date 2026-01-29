//Printing all divisors of a number 
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i;
    cout<<endl;

    vector<int>vct;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
           vct.push_back(i); 
           if((n/i)!=i)
            {
            vct.push_back(n/i);
            }
        }
    }
    sort(vct.begin(),vct.end());
    for(i=0;i<vct.size();i++)
    {
        cout<<vct[i]<<" ";
    }

    return 0;
}
