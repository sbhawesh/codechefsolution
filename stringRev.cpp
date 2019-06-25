#include<bits/stdc++.h>
using namespace std;

int main(){

     int t;
     cin>>t;
     while(t--)
     {


         char dup[3000]={0};
         /*string a;
         cin>>a;
         string current="";
         vector<string> res;
         for(int i=0;i<a.size();i++){
            if(a[i]=='.'){
                    res.push_back(current);
                    current="";
            }else current+=a[i];
         }
         res.push_back(current);
         for(int i=res.size()-1;i>=0;i--){
            cout<<res[i];
            if(i!=0) cout<<".";
         }
         cout<<endl;*/
        string arr;
        int i;
        cin>>arr;
        i=arr.size();
        int count=0,index=0,n=i-1,temp;
        for(int j=n;j>=0;j--)
        {
            count++;
            if(arr[j]=='.')
            {
                temp=j+1;
                count=count-1;
                while(count--)
                {
                    dup[index++]=arr[temp++];
                }
                dup[index++]='.';
                count=0;
            }
            if(j==0)
            {
                temp=j;
                while(count>=0)
                {
                   dup[index++]=arr[temp++];
                   count--;
                }
            }

        }
        dup[index]='\0';
        for(int k=0;k<index-1;k++)
        {
            cout<<dup[k];
        }
        cout<<endl;
     }

    return 0;
}
