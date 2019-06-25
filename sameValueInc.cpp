#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//#define maxi 100000000

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        int temp[max+2];
        memset(temp,0,sizeof(temp));
        int sub,flag=0,mx=0,index=0,result=0;
        for(int i=0;i<n;i++){
            sub=arr[i+1]-arr[i];
            if(sub<0){
                sub=sub*(-1);
            }
            if(sub<2){
                temp[arr[i]]+=1;
                if(flag!=1 && i==n-1){
                    mx=0;
                mx = temp[0]+temp[1];
                for(int j=1;j<=max;j++){

                    if((temp[j]+temp[j+1])>mx){
                        mx = temp[j]+temp[j+1];
                       // cout<<mx<<endl;
                    }
                }
                //memset(arr,0,sizeof(arr));
                if(mx>result){
                    result = mx;
                   //
                cout<<result;
                }
                }
            }
            else{
                flag=1;
                temp[arr[i]]+=1;
                mx=0;
                mx = temp[0]+temp[1];
                for(int j=1;j<=max;j++){

                    if((temp[j]+temp[j+1])>mx){
                        mx = temp[j]+temp[j+1];
                    }
                }
                //cout<<mx<<">>";
               // memset(&arr[0],0,arr.size() * sizeof(arr[0]));
               memset(temp,0,sizeof(temp));

                if(mx>result){
                    result = mx;
                }
                //cout<<result<<" ";


            }
        }

      cout<<result<<endl;

    }
return 0;
}
