//Modified Bubble sort for best case TC is O(n) using flag for avg,worst its O(n^2)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MAX 10

int main()
{
	int arr[MAX];
	int i,j;
	srand(time(NULL));
	
	for(i=0;i<=MAX-1;i++)
	{
		arr[i]=rand()%100;
	}
	
	for(i=0;i<=MAX-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int flag=1;
	for(i=1;i<MAX && flag==1;i++)
	{
		flag=0;
		for(j=0;j<=MAX-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				flag=1;
			}
		}
	}
	
	
	cout<<"\nSorted array-";
	for(i=0;i<=MAX-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}




