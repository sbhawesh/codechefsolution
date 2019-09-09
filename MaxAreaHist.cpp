#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    stack<long long int>s;
	    long long i=0,temp=0,area=0,maxi=INT_MIN;
	    while(i<n){
	        if(s.empty() || arr[i]>arr[s.top()]){
	            //if(i==n)break;
	            s.push(i);
	            i++;
	        }
	        else{
	                temp=s.top();
	                s.pop();
	                if(s.empty()) area = arr[temp]*i;
	                else
	                   area = arr[temp]*(i-s.top()-1);
	                if(area>maxi) maxi=area;
	        }
	    }
	    while(!s.empty()){
	        temp=s.top();
	        s.pop();
	        if(s.empty()) area = arr[temp]*i;
	        else
	           area = arr[temp]*(i-s.top()-1);
	        if(area>maxi) maxi=area;
	    }

	    cout<<maxi<<endl;
	}
	return 0;
}
