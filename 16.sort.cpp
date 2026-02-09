

#include <iostream>
using namespace std;

int main()
{
	int num[10],i;
	cout<<"Enter 10 numbrs to sort:\n";
	for(i=0;i<10;i++)
	{
		cin>>num[i];	
	}
	
	for(i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(num[i]>num[j])
			{
				swap(num[i],num[j]);
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}
