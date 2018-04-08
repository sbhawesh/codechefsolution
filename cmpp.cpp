#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
    string names[101];
    int t,index[50]={-1};
    cin>>t;
    for(int i=0;i<t;i++)
    {
      cin>>names[i];
    }

    for(int i=0;i<t;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            if(names[i].compare(names[j])==0)
            {
               index[j]=j;
            }

        }
    }

   for(int i=0;i<t;i++)
   {
       if(i==index[i])
       {
           cout<<"YES\n";
       }
       else
       cout<<"\nNO\n";
   }
    return 0;
}
