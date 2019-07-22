#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long double sum=0,result=0;
	    int n;
	    cin>>n;
	    long double arr[n],count=1;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==arr[i-1] && i>0){
	            count++;
	        }
	        sum+=arr[i];
	    }
	    if(count!=n){
    	    long double mean = sum/(float)n;
    	    sort(arr,arr+n);

    	    int mid = (n-1)/2,low,ct=0,sm;
    	    low=mid;
    	    //high=low+1;
    	    long double save,temp;
    	    while(ct!=2){
        	        if(temp>mean){
        	            ct++;
        	            low=mid+1;
        	        }
    	        sm=0.0;
                sm=sum-arr[low];
    	        temp = sm/(float)(n-1);

    	        if(temp==mean){
    	            result = arr[low];
    	            break;
    	        }
    	       if(ct==0)
    	         low--;
    	       if(ct==1)
    	         low++;

    	    }
	    }
	    else{
	        result=1;
	    }
	    if(result==0){
	        cout<<"Impossible"<<endl;
	    }
	    else{
	        cout<<result<<endl;
	    }


	}
	return 0;
}
