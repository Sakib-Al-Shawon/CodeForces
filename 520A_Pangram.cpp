#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    string s,S;

    cin>>s;

    //if(n<26)
    //{
        //cout<<"NO";
    //}
    //else
    //{
        for(int i=0;i<n;i++)
        {
            S[i]=toupper(s[i]);
        }

        sort(S.begin(),S.end());

        for(int i=0;i<n;i++)
        {
            cout<<S[i];
        }
    //}

}
