#include<iostream>
using namespace std;

int main()
{
    string s,ch;
    cin>>s;

    if(s[0]>='a' && s[0]<='z')
    {
        ch=toupper(s[0]);
    }
    else
    {
        ch=s[0];
    }
    cout<<ch;

    for(int i=1;i<s.length();i++)
    {
        cout<<s[i];
    }

    return 0;
}
