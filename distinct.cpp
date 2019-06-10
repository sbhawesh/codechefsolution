#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }
        int *dupli = (int*)calloc((maxi+1), sizeof(int));

        for(int i=0;i<n;i++){
            dupli[arr[i]]+= 1;
        }
        int mark=0;

        for(int i=0;i<=maxi;i++)
        {
            if(dupli[i]>1){
                cout<<"Yes";
                mark=1;
                break;
            }
        }
        if(mark==0){
            cout<<"No";
        }
        free(dupli);


    }
    return 0;
}
