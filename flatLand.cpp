#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0,square;
	    while(n>0){
	            int minDistance = n-1;
	            square=1;
	            for(int i=2;i<=31;i++){
	                int temp = n-(i*i);
	                if(temp<minDistance && temp>=0){
	                    minDistance = temp;
	                    square = (i*i);
	                }

	                if(temp<0)
                        break;
	            }
	            n=n-square;
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
