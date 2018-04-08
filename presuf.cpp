#include<stdio.h>
int prefix(int *,int);
int suffix(int *,int,int);
void main()
{
   int arr[4]={4,2,1,3};



   int a,b,c,index=0,d=0,i;
   for(i=0;i<4;i++)
   {
       a=prefix(arr,i);
       b=suffix(arr,i,4);
       c=a+b;
       if(c<d && i!=0)
       {
           index=i;
       }
       if(d>c || i==0)
       {
           d=c;

       }
   }

   printf("index=:%d min=%d",index,d);


}

 int prefix(int a[],int n)
 {
    int i,b=0;
       for(i=0;i<=n;i++)
         {

             b=b+a[i];

         }
  return b;
 }

 int suffix(int a[],int s,int N)
 {
     int i,b=0;
      for(i=s;i<=N;i++)
      {

          b=b+a[i];
      }

     return b;
 }
