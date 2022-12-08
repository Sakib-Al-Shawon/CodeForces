#include<iostream>
using namespace std;

int main()
{
    int n,x,distress=0;
    long long ice_cream;
    char ch;
    cin>>n>>ice_cream;

    while(n--)
    {
        cin>>ch>>x;
        if(ch=='+')
        {
            ice_cream=ice_cream+x;
        }
        if(ch=='-' && ice_cream<x)
        {
            distress++;
        }
        if(ch=='-' && ice_cream>=x)
        {
            ice_cream=ice_cream-x;
        }
    }

    cout<<ice_cream<<" "<<distress;

    return 0;
}
