#include <iostream>
using namespace std;

int main() {
	int arr[101],temp[101]={101},t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	      cin>>arr[i];
	    }
	    int j=1,count,p;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2!=0)
	        {
	            if(temp[j-1]>=arr[i])
	            {
	             temp[j++]=arr[i];
	            }
	            else
	            {
	                temp[j++]=arr[i];
	                p=j-1;
	                count=p;
	                count--;
	                while(temp[count]<temp[p] && count!=0)
	                {
	                    int tmp;
	                    tmp=temp[count];
	                    temp[count]=temp[p];
	                    temp[p]=tmp;
	                    count--;
	                    p--;
	                }
	            }

	        }
	    }
	    for(int i=0;i<j;i++)
	    {
	       temp[i]=temp[i+1];
	    }
	    int k=j-1;
	    temp[k]=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==0)
	        {
	            if(temp[j-1]<=arr[i])
	            {
	             temp[j++]=arr[i];
	            }
	            else
	            {
	                temp[j++]=arr[i];
	                p=j-1;
	                count=p;
	                count--;
	                while(temp[count]>temp[p] && count!=k)
	                {
	                    int tmp;
	                    tmp=temp[count];
	                    temp[count]=temp[p];
	                    temp[p]=tmp;
	                    count--;
	                    p--;
	                }
	            }

	        }
	    }
	    for(int i=k;i<n;i++)
	    {
	       temp[i]=temp[i+1];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<temp[i]<<" ";
	    }

	    cout<<endl;
	}
	return 0;
}
