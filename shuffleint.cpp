#include <iostream>
using namespace std;

void shuffle(int *arr,int n,int mid,int k){
    if(mid==n){
        return;
    }
    else{
    int temp = mid;
    int save = arr[temp];
    while(temp>k){
        arr[temp]=arr[temp-1];
        temp--;
    }
    arr[k] = save;
    shuffle(arr,n,mid+1,k+2);
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int mid;
	    if(n==1){
	        cout<<arr[0];
	    }else{


	    mid = n/2;
	    if(n%2==0){
	        shuffle(arr,n,mid,1);
	    }
	    else{
	        //mid+=1;
	        int ng= n-1;
	        shuffle(arr,ng,mid,1);
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    }
	    cout<<endl;

	}
	return 0;
}
