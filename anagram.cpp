#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[5][10]={"cat","bat","dog","tac","god"},dup[5][10];
    int i=0;
    int count[5];
    while(i!=5)
    {
        int j=0;
        vector<char>temp;
        while(arr[i][j]!='\0')
        {
           temp.push_back(arr[i][j]);    //inserting each word to vector
           j++;
        }
        int l=0;
        while(arr[i][l]!='\0')
        {
            dup[i][l]=temp[l];                 //Creating duplicate array of(arr)
            l++;

        }
        sort(temp.begin(),temp.end());          //Sorting
        int k=0;
        while(arr[i][k]!='\0')
        {
            arr[i][k]=temp[k];                 //Overwriting sorted word to its original position in array
            k++;
            count[i]=k;                        //Counting each word length
        }
        i++;                 //Iteration to all words
    }

   int y=1,wrd=0,next=0,lock;
    while(next!=4)
    {

     wrd=next;
     y=wrd+1;
     next=0;
     lock=0;                //Lock variable removes unwanted printing of duplicate words
    while(y<5)
    {
        int sizeq=count[wrd];                     //Size of each word
        if(strcmp(arr[wrd],arr[y])==0)
        {
               cout<<" ";
               if(lock==0)
               {
                for(int n=0;n<sizeq;n++)
                {
                    cout<<dup[wrd][n];
                }
                lock++;
               }
               cout<<" ";
               for(int n=0;n<sizeq;n++)
               {
                    cout<<dup[y][n];
               }


        }
        else{
             if(y<next || next==0)
             {
                 next=y;
             }
            }
        y++;
    }
    }
return 0;

}

