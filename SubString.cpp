#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    int i, t, j, n, flag=1;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        n=s.size();

        flag=1;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(s[i]==s[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag==0)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}


