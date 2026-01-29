//Check if String is Palindrome or Not

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

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
    while(i<j)
    {
        // skip spaces from left
        if (s[i] == ' ')
        {
            i++;
            continue;
        }

        // skip spaces from right
        if (s[j] == ' ')
        {
            j--;
            continue;
        }

        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    
    if(i>=j)
    {
        cout<<"\nPalindrome";
    }
    else
    {
        cout<<"\nNot a Palindrome";
    }

    return 0;
}
