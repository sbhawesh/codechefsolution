#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=0,n,count=0,i=0,j=0,arr[20],d[20],k;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i=0;
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
    for(i=0;i<count;i++)
    {
        cout<<d[i];
    }
    int p=0;
    int z=n;
    for(i=n;i<=(n+k);i++)
    {
        arr[i]=d[p++];
    }
    count=count+z;
    cout<<endl;
    for(i=0;i<count;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
