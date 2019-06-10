#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool checkDuplicates(int array[], int n)
{
 set <int> s(array, array+n);
 return s.size() != n;
}

 int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        if((checkDuplicates(array,n))==true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
     }
     return 0;
 }
