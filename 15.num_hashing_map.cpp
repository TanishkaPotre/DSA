//Counting Frequencies of Array Elements using map

#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	
	int* arr=new int[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	map<int,int> mpp;
	for(int i=0;i<n;i++)
	{
		mpp[arr[i]]++;
	}
	
	int q;
	cout<<"Enter q:";
	cin>>q;
	
	while(q--)
	{
		int num;
		cout<<"Enter num:";
		cin>>num;
		cout<<mpp[num];
		cout<<endl;
	}
	
	return 0;
}
