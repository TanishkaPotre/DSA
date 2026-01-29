//Count all Digits of a Number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int count=0;

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<"\nNo. of digits="<<count;
    
    return 0;
}
