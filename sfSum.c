#include<stdio.h>
#include<stdlib.h>
#define max (int)1e5
int arr[max];
int prefix[max];
int suffix[max];
int sum[max];

void main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int i,n,index=0,min;
    	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
			prefix[0]=arr[0];
        for(i=1;i<n;i++)
         {
           prefix[i]=arr[i]+prefix[i-1];
         }
         
         	suffix[0]=prefix[n-1];
        for(i=0;i<n-1;i++)
        {
            suffix[i+1]=suffix[i]-arr[i];
        }
        
        for(i=0;i<n;i++)
        {
            sum[i]=prefix[i]+suffix[i];
        }
    
         min=sum[0];
         
         for(i=1;i<n;i++)
		  {
			   if(sum[i]<min)
			   {
					min=sum[i];
				    index=i;
				}
		  }
  		printf("%d\n",index);
 	}
 }
