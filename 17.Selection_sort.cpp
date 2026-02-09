//Selection sort

#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
#define MAX 10


int findmin(int *num,int up,int low)
{
	int min=num[low];
	int ind=low;
	for(int j=low;j<=up;j++)
	{
		if(min>num[j])
		{
			min=num[j];
			ind=j;
		}	
	}
	
	return ind;
}
int main()
{
	int *num=new int[MAX];
	int i;
	srand(time(NULL));
	for(i=0;i<MAX;i++)
	{
		num[i]=rand()%100;
	}
	for(i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	
	for(i=0;i<MAX;i++)
	{
		int min=findmin(num,MAX-1,i);//It returns index
		
		if(num[i]>num[min])
		{
			swap(num[i],num[min]);
		}
	}

	
	cout<<"\nSorted array\n";
	for(i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}
