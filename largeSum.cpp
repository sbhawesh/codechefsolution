#include<iostream>
#include<climits>
using namespace std;

int max_Sum(int arr[], int n)
{
    int max1= -2147483647, max2= 0;

    for(int i=0;i<n;i++){
        max2= max2 + arr[i];
        if (max1 < max2)
            max1 = max2;

        if (max2 < 0)
            max2 = 0;
    }
    return max1;
}

int main()
{
    int arr[] = {-1,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = max_Sum(arr, n);
    cout<<result;
    return 0;
}
