#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
while(s--)
{
    int i,l=0,count=0;
    int a[2];
    int arr[504];
    for(i=0;i<=1;i++)
    {
        cin>>a[i];
    }
    int q=a[1]/2;
    int r=a[1]/10;
 for(i=0;i<a[0];i++)
 {
     cin>>arr[i];
 }
 for(i=0;i<a[0];i++)
 {
        if(arr[i]>=q)
        {
            l++;
        }
 }
         if(l==1)
         {
                    for(int j=0;j<a[0];j++)
                    {
                        if(arr[j]<=r)
                        {
                            count++;
                        }
                    }
                if(count==2)
                {  cout<<"yes\n";
                }
                else
                {
                    cout<<"no\n";
                }
          }
        else
        {
            cout<<"no\n";
        }
}
return 0;
}
