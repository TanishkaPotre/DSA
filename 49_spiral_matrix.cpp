#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
  public:
      vector<int> spiralOrder(vector<vector<int> >& matrix) 
      {
        int m,n;
        m=matrix.size();
        n=matrix[0].size();

        int left=0,right=n-1,top=0,bottom=m-1;

        vector<int> ans;

        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }

        }
        
        /*for(int i=0;i<ans.size();i++)
        {
        	cout<<ans[i]<<" ";
		}*/

        return ans;
          
          
      }
};
void printArray(vector<vector<int> > arr,int m,int n)
{
  int i,j;
  cout<<endl<<endl;
  for(i=0;i<m;i++)
  {
    cout<<endl;
    for(j=0;j<n;j++)
    {
      cout<<arr[i][j]<<"  ";
    }
  }
}
int main()
{
	int m,n,i,j;
	cout<<"\nEnter the number of rows to be included in matrix: ";
	cin>>m;
    cout<<"\nEnter the number of columns to be included in matrix: ";
	cin>>n;
	vector<vector<int> > arr(m, vector<int>(n));
    for(i=0;i<m;i++)
    {
      	for(j=0;j<n;j++)
	    {
	      cout<<"\nEnter a number to add: \n";
	      cin>>arr[i][j];
	    }
  	}
	printArray(arr,m,n);
	Solution sol;
	vector <int> ans = sol.spiralOrder(arr);
	cout<<endl<<endl;
	for(i=0;i<ans.size();i++)
  	{
    	cout<<" "<<ans[i];
  	}
}
