#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,2,5,6,7,7,9},n;
    cin>>n;
    int dup[8][2];
    int high=7;
    int count=0,i=0,j=0;
    int low=0;

    while(high!=low)
    {
      if(arr[high]>n)
      {
        high--;
       }
       else {
        if((arr[low]+arr[high])>n){
            high--;
        }
        else{
            low++;
        }
        if((arr[low]+arr[high])==n && high!=low)
        {
            cout<<arr[low]<<" "<<arr[high];
            cout<<endl;
            dup[i][j++]=arr[low];
            dup[i][j]=arr[high];
            i++;
            j=0;
            count++;
        }
       }
    }
    if(count==0){
        cout<<"no matching to sum";
    }
    int k,temp;

   for(temp=0;temp<i-1;temp++)
    {
    for(k=1;k<i;k++)
     {
        if(dup[temp][j]==dup[k][j]){
            if(dup[k][++j]==dup[temp][j]){
               dup[k][j]=0;
               dup[k][j-1]=0;

              j=0;
            }
            else{
                j=0;
            }
        }
        else{
            break;
        }
     }
    }

cout<<"----------"<<endl;
 int sum[8][2],p,m,s=0;
 for(p=0;p<i;p++)
 {
     for(m=0;m<2;m++)
     {
         if(dup[p][m]!=0){
            sum[s][m]=dup[p][m];
            if(m==1)
            {
                s++;
            }

         }

     }

 }
 int next = sum[i-1][1];
 int step = sum[i]
 for(int l=0;l<s;l++)
    {
        for(int q=0;q<2;q++)
        {
            cout<<sum[l][q]<<" ";
        }
        cout<<endl;
    }

return 0;
}
