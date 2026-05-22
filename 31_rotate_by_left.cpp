//Left Rotate Array by K Places

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//<-----Brute force approach------->
void left_rotate_by_k(vector<int> &nums,int k)
{
    int n=nums.size();

    k=k%n;

    int temp[k];
    int i;
    for(i=0;i<k;i++)
    {
        temp[i]=nums[i];
    }

    for(i=k;i<nums.size();i++)
    {
        nums[i-k]=nums[i];
    }
    for(i=k;i<nums.size();i++)
    {
        nums[i]=temp[i-(n-k)];
    }
}

//<------Optimal approach------->
void left_rotate(vector <int> &num,int k)
{

    reverse(num.begin(),num.begin()+k);
    reverse(num.begin()+k,num.end());
    reverse(num.begin(),num.end());

}


int main()
{
    vector <int> num = {1,2,3,4,5,6};

    int k;
    cout<<"Enter value of k=";
    cin>>k;

    //left_rotate_by_k(num,k);
    left_rotate(num,k);
    
    for(int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}

