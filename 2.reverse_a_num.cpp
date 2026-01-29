//Reverse a number

#include <iostream>
using namespace std;

int main()
{
    int rev = 0;
    int n;
    cout<<"Enter a number:";
    cin>>n;

        while (n != 0)
        {
            int rem = n % 10;      
            rev = rev * 10 + rem; 
            n = n / 10;            
        }

        cout<<"\n"<<rev;
        return 0;
}
