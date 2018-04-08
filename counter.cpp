#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    t=rand();
    cout<<t;
    cout<<endl;

    t=t%20;
    if(t==0)
    {
        t=1;
    }

    cout<<t;
    int g,count=0,p=6;
    for(int i=0;i<p;i++)
    {
        cin>>g;
        count++;
        if(g>t)
        {
            cout<<"too high";
            continue;
        }
        if(g<t)
        {
            cout<<"too low";
        }
        if(g==t) 
        {
            cout<<"you guessed at "<<count;
            break;
        }
    }

    return 0;
}
