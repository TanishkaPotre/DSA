//Armstrong number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int dup=n;
    int sum=0;

    while(n>0)
    {
        int rem=n%10;
        sum=sum+(rem)*(rem)*(rem);
        n=n/10;
    }
    if(sum==dup)
    {
        cout<<"\nArmstrong number ";
    }
    else
    {
        cout<<"\nNot";
    }
    return 0;
}
