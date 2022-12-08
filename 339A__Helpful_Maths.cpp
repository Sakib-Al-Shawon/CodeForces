#include<iostream>
using namespace std;

int main()
{
    int coun1=0,coun2=0,coun3=0;
    string s,x,y,z,nu;
    cin>>s;

    for(int i=0;i<s.length();i+=2)
    {
        if(s[i]=='1')
        {
            coun1++;
        }
        else if(s[i]=='2')
        {
            coun2++;
        }
        else
        {
            coun3++;
        }

    }

    for(int i=0;i<coun1;i++)
    {
        x=x+"1+";
    }

    for(int i=0;i<coun2;i++)
    {
        y=y+"2+";
    }

    for(int i=0;i<coun3;i++)
    {
        z=z+"3+";
    }

   nu=x+y+z;

   for(int i=0;i<nu.length()-1;i++)
   {
       cout<<nu[i];
   }
}
