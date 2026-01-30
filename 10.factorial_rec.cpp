//Factorial of a given number

#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int product=factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<product;
    
    return 0;
}
