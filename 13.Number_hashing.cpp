//Number Hashing

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int *arr=new int[n];
    cout<<"\nEnter elements:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int hasharr[10]={0};

    for(int i=0;i<n;i++)
    {
        hasharr[arr[i]]++;
    }

    int q;
    cout<<"Enter q:";
    cin>>q;
    cout<<endl;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<num<<"->"<<hasharr[num];
        cout<<endl;
    }


    return 0;
}
