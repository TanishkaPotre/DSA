//Merge sort

#include <iostream>
using namespace std;


 int main()
 {
 	int num1[5]={6,8,15,19,25};//ALways sorted 
 	int num2[5]={2,4,7,10,12};//Always sorted
 	
 	int res[10];
 	int i=0,j=0,k=0;
 	
 	while(i<5 && j<5)
 	{
 		if(num1[i]<num2[j])
 		{
 			res[k]=num1[i];
			 i++;	
		}
		else
		{
			res[k]=num2[j];
			j++;
		}
		k++;
	}
	
	while(i<5)
	{
		res[k]=num1[i];
		i++;
		k++;
	}
	
	while(j<5)
	{
		res[k]=num2[j];
		j++;
		k++;
	}
	
	for(k=0;k<10;k++)
		cout<<res[k]<<"  ";
	
	
	return 0;
 }

