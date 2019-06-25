#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void min_count(string s1,string s2,int array[],int &res,int inc,int count){

    //int count = 0;
    /*for(auto x : arry){
        if(x>0){
            count++;
        }
    }*/
    count=0;
    for(int i=0;i<26;i++){
        if(array[i]>0){
            count++;
        }
    }
    //cout<<"->"<<res<<" "<<count<<endl;
    if(inc == s1.length()){
        res = min(res,count); //base case
        return;
    }

    swap(s1[inc],s2[inc]);
    array[(s1[inc]-'a')]++;

    min_count(s1,s2,array,res,inc+1,count);

    array[(s1[inc]-'a')]--;
    swap(s1[inc],s2[inc]);

    array[(s1[inc]-'a')]++;
    min_count(s1,s2,array,res,inc+1,count);
    array[(s1[inc]-'a')]--;

    //return res;


}

int min_Check(string s1, string s2){

    int res=0;
    res = s1.length();
    //int answer;
    int array[26];
    memset(array,0,sizeof(array));
    min_count(s1,s2,array,res,0,0);
    return res;
}

int main()
{
    string s1 = "abcda";
    string s2 = "babab";
    int result;
    result = min_Check(s1,s2);
    cout<<result;
    return 0;
}
