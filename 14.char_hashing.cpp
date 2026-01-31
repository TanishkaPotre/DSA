//Character Hashing

#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main()
{
	char s[20];
	cout<<"Enter a sequence:";
	cin.getline(s,20);
	
	for(int i=0;i<strlen(s);i++)
	{
		s[i]=tolower(s[i]);
	}
	
	int hasharr[26]={0};
	
	for(int i=0;i<strlen(s);i++)
	{
		hasharr[s[i]-'a']++;
	}
	
	int q;
	cout<<"Enter q:";
	cin>>q;
	
	while(q--)
	{
		char ch;
		cout<<"Enter a charater:";
		cin>>ch;
		cout<<hasharr[ch-'a']<<"\n";
	}
	
	return 0;
}
