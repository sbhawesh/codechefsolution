#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int d[200005];
int main()
{
    int test;
    cin>>test;
while(test--)
{
    int n,k,s,i,j,l=0,a[2],count=0;
    vector<int>arr;
    set<int>st;
    for(i=0;i<2;i++)
    {
        cin>>a[i];
    }
    n=a[0];
    k=a[1];
if(k==0)
{
            count=0;
            for(i=0;i<n;i++)
            {
                cin>>s;
                arr.push_back(s);
            }
    sort(arr.begin(),arr.end());
    for(i=0;i<=n;i++)
    {
         if(i==arr[i])
         {
             count++;
         }
         else
          {break;}
    }
     cout<<count<<endl;
}
else{
        count=0;
            for(i=0;i<n;i++)
            {
                cin>>s;
                st.insert(s);
            }
            copy(st.begin(), st.end(),back_inserter(arr));
            n=arr.size();
    sort(arr.begin(),arr.end());
    i=0;
    j=0;
    while(1)
    {
        while(j<arr[i])
        {
            d[l++]=j;
            j++;
            count++;
        }
        if(j==arr[n-1])
            break;
          j++;
          i++;
        if(count==k)
            break;
    }
    int q;
    if(count!=k)
    {
        q=k-count;
        for(i=0;i<q;i++)
        {
            d[count++]=arr[n-1]+(i+1);
        }
    }
    int p=0;
    int z=n;
    for(i=0;i<k;i++)
    {
        arr.push_back(d[i]);
    }
    count=count+z;
    sort(arr.begin(),arr.end());
    int fgf=arr.size();
    count=0;
    for(i=0;i<=fgf;i++)
    {
         if(i==arr[i])
         {
             count++;
         }
         else
          {break;}
    }
     cout<<count<<endl;


}
}
return 0;
}
