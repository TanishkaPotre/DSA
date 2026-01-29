//Check for prime
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int cnt=0;
    int i;
    for(i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++; 
            if((n/i)!=i)
            {
                cnt++;
            }
        }
    }

    if(cnt==2)
    {
        cout<<"It is a prime num";
    }
    else
    {
        cout<<"It is not a prime num ";
    }
    return 0;

}
