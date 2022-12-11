#include<iostream>
using namespace std;

int main()
{
    string s;
    char temp,ch;
    int capital=0,small=0;
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        temp=s[i];
        if(temp>='A' && temp<='Z')
        {
            capital++;
        }
        else
            small++;
    }

    if(capital>small)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s;
    }
    else if(small>capital || small==capital)
    {
          for(int i=0;i<s.length();i++)
        {
             s[i]=tolower(s[i]);
        }
        cout<<s;
    }

    return 0;
}
