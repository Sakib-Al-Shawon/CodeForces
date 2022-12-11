#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int temp=1,coun=s.length();

    for(int i=0;i<=s.length();i++)
    {
        for(int j=temp+i;j<=s.length();j++)
        {
            if(s[i]==s[j])
            {
                coun=coun-1;
                break;
            }
        }
    }

    if(coun%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}


