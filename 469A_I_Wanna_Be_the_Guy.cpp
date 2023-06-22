#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,arr[200],coun=0;

    cin>>n>>p;

    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }

    cin>>q;

    for(int i=p;i<p+q;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+(p+q));

    for(int i=0;i<p+q;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            coun++;
        }
    }
    if(coun==n)
    {
        cout<<"I become the guy.";
    }
    else
        cout<<"Oh, my keyboard!";


    return 0;
}
