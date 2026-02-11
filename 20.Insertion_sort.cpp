//Insertion sort

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
	cout<<endl<<endl;
	
	int temp;
	
	for(i=1;i<MAX;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 && arr[j]>temp;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
	
	cout<<"Sorted array-";
	for(i=0;i<=MAX-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
