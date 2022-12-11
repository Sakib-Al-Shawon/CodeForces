#include<iostream>
using namespace std;

int main()
{
    int n,coun=0;
    cin>>n;

    string s;
    cin>>s;

    while(n!=0)
    {
        for(int i=0;i<s.length();i++)
        {
           if(s[i]==s[i+1])
           {
              coun++;
           }
        }
        n--;
    }
    cout<<coun;

    return 0;
}
