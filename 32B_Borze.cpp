#include<iostream>
using namespace std;

int main()
{
    int a,b=0;
    string s;

    getline(cin, s);

    a=s.length();

    while(b<a)
    {
        if(s[b]=='.')
        {
            cout<<0;
            b++;
        }
        else if(s[b]=='-' && s[b+1]=='.')
        {
            cout<<1;
            b+=2;
        }
        else if(s[b]=='-' && s[b+1]=='-')
        {
            cout<<2;
            b+=2;
        }
    }

    return 0;
}
