/*Print 1 to N using Recursion*/

#include <iostream>
using namespace std;

void printnumber(int n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        printnumber(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter a num:";
    cin>>n;

    printnumber(n);
    return 0;
}

