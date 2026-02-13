//Merge sort

#include <iostream>
using namespace std;


void merge(int* & num,int low,int mid,int high)
{
    int i=low,j=mid+1,k=0;
    int* temp=new int[high-low+1];

    while(i<=mid && j<=high)
    {
        if(num[i]<num[j])
        {
            temp[k]=num[i];
            i++;
            k++;
        }
        else{
            temp[k]=num[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        temp[k]=num[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        temp[k]=num[j];
        j++;
        k++;
    }
    for(i=0;i<high-low+1;i++)
    {
        num[low+i]=temp[i];
    }
}

void merger_sort(int* &num,int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    else{
        int mid=(low+high)/2;
        merger_sort(num,low,mid);
        merger_sort(num,mid+1,high);
        merge(num,low,mid,high);
    }
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int *num=new int[n];
    cout<<"Enter numbers:";
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    merger_sort(num,0,n-1);
    cout<<"Sorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
