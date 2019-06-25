#include<bits/stdc++.h>
using namespace std;
typedef long long int lng;

int main()
{
    lng t;
    cin>>t;
    while(t--)
    {
        lng i,j,r,c;
       int flag=0,number;
       cin>>r>>c;
       for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
           {
               cin>>number;
               if((i==0 || i==r-1) && (j==0 || j==c-1)){
                   if(number>=2)
                    flag=1;
               }
               else if((i==0 || i==r-1) || (j==0 || j==c-1)) {
                   if(number>=3)
                    flag=1;
               }
               else{
                   if(number>=4)
                     flag=1;
               }

           }
       }
       if(flag==1)
         cout<<"Unstable"<<endl;
       else
         cout<<"Stable"<<endl;
    }
    return 0;
}




