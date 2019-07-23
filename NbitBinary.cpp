#include <bits/stdc++.h>
using namespace std;

void checkarr(int arr[], int n,int sum)
{
        for (int i = 0; i < n; i++) {
            if(arr[i]==1)
                sum+=1;
        }
        int chk =0;
        int temp = sum;
        for(int i=1;i<=n;i++){
            temp = (arr[n-i]==1)?temp-1:temp;
            if(sum>=(n-sum) && temp>=((n-i)-temp))
                chk = 1;
            else{
                chk = 0;
                break;
            }
        }
        if(chk==1){
            for (int i = 0; i < n; i++) {
                    cout<<arr[i];
            }
         cout<<" ";
        }
}


void BinaryString(int n, int arr[], int i)
{
    if (i == n) {
        checkarr(arr,n,0);
        return;
    }
    if(arr[0]==0){
        return;
    }
    arr[i] = 1;
    BinaryString(n, arr, i + 1);
    arr[i] = 0;
    BinaryString(n, arr, i + 1);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        BinaryString(n, arr, 0);
        cout<<endl;
    }


    return 0;
}
