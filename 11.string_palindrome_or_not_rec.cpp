////Check if String is Palindrome or Not

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int palin(string s,int i,int j)
{
    if(i>j)
    {
        return 1;
    }
    if(s[i]!=s[j])
    {
        return 0;
    }
    else
    {
        int res=palin(s,i+1,j-1);
        return res;
    }
}


int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);

    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    int i=0,j=s.size()-1;
    int n=palin(s,i,j);
    if(n==1)
    {
        cout<<"\nPalindrome";
    }
    else
    {
        cout<<"\nNot a Palindrome";
    }


    return 0;
}
