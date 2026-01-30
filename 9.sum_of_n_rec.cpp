//Sum of First N Numbers

#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int add=sum(n-1);
        add=add+n;
        return add;
    }
}


int main()
{
    int n;
    cout<<"Enter a num:";
    cin>>n;

    int add=sum(n);
    cout<<" Sum of n natural number is="<<add;

}
