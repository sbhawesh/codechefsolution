#include<iostream>
using namespace std;

int main()
{
    int arr[101],save[101],n,t;
    cin>>t;
    while(t>0)
    {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp=n-1;
    save[0]=arr[n-1];
    n=n-2;
    int p=1;
    while(n>=0)
    {

        if(arr[n]>arr[temp])
        {
            save[p++]=arr[n];
            temp=n;
        }
        n--;

    }
    p--;
    for(int i=p;i>=0;i--)
    {
        cout<<save[i]<<" ";
    }
    cout<<endl;
     t--;
    }

    return 0;
}
