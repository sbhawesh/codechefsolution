#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool parity(int n){
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n     = n & (n - 1);
    }
    return parity;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int q,even=0,odd=0;
	    cin>>q;
	    int x[q+1];
	    for(int i=0;i<q;i++){
	        cin>>x[i];
	    }
	    unordered_map<int,bool>st;
	    unordered_map<int,bool>::iterator it,itr;
	    vector<pair<int,int>>evenOdd;
	    st.insert(make_pair(x[0],true));
	    if((parity(x[0])))
	        odd++;
	    else
	        even++;
        evenOdd.push_back(make_pair(even,odd));

	    for(int i=1;i<q;i++){
            if(st.find(x[i])!=st.end()){
                    //continue;
            }else{

            int temp;
	        for(it=st.begin();it!=st.end();it++){
                    temp = it->first^x[i];
                    st.insert(make_pair(temp,false));
            }
            st.insert(make_pair(x[i],true));
            parity(x[i])? odd++:even++;
	        for(auto x: st){
                cout<<x.first;
	        }
	        cout<<endl;

	        for(it=st.begin();it!=st.end();it++){
                //cout<<*it<<endl;
                if(it->second==false){
                    parity(it->first)?odd++:even++;
                    it->second=true;
                }
	        }
        }
	        evenOdd.push_back(make_pair(even,odd));

	    }
	    for(auto x:evenOdd){
	        cout<<x.first<<" "<<x.second<<endl;
	    }

	}
	return 0;
}

