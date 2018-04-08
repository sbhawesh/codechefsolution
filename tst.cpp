#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;
    vector <int> b;
    vector <int> c;
    int n,d=0,j=1,i,sm=0,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
      int temp=0;
      scanf("%d",&temp);
      a.push_back(temp);

    }
    stable_sort(a.begin(),a.end());
    b[0]=a[0];

        if(d==0 && j!=n)
        {
            b[j]=a[j];
            d++;
            j++;

        }
        if(d==1 && j!=n)
        {

            c[j-2]=a[j];
            d--;
            j++;

        }

  for(i=0;i<b.size();i++)
  {

      sum=sum+b[i];
  }
  for(i=0;i<c.size();i++)
  {

      sm=sm+c[i];
  }
  cout<<sum<<" "<<sm;
    return 0;
}
