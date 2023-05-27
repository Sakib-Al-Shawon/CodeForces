#include<iostream>
using namespace std;

int main()
{
    int n,h,coun=0;

    cin>>n>>h;

    int arra[];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
        if(arra[i]>h)
            coun=coun+2;
        else
            coun++;
    }

    cout<<coun;

    return 0;
}
