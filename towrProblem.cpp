#include <iostream>
using namespace std;
const int sz=2;
int i=1,coun=0;

void move(int n,int a,int b,int c,int arr[][sz]){
    if(n>0){
        coun++;
        if(coun>1100){
            return;
        }
        move(n-1,a,c,b,arr);
        arr[i][0]=a;
        arr[i++][1]=c;
        move(n-1,b,a,c,arr);

    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    i=1;
	    coun=0;
	    int n,m,arr[1000000][2];
	    cin>>n>>m;
	    move(n,1,2,3,arr);
	    cout<<arr[m][0]<<" "<<arr[m][1]<<endl;

	}
	return 0;
}
