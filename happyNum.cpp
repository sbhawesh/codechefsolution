#include <iostream>
using namespace std;

void happyNum(int n){
    int t=n,a=0,sum=0;
    while(sum>9 || sum==0){
    if(sum!=0){
        t=sum;
    }
     a=0;
     sum=0;
     while(t>0){
         a=t%10;
         t=t/10;
         sum=sum+(a*a);
      }
    }

    if(sum==1){
        cout<<n<<endl;
        return;
    }
    else{
        happyNum(n+1);
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    happyNum(n+1);
	}
	return 0;
}
