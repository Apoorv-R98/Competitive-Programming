//Problem Code: VOTERS

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int n = n1+n2+n3;
	int a[n];
	std::vector<int> v;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	std::map<int, int> mp;
	sort(a,a+n);
	for(int i=0;i<n;i++){
	    mp[a[i]]++;
	}
	
	for(auto x:mp){
	    if(x.second>=2){
	        v.push_back(x.first);
	    }
	}
	cout<<v.size()<<endl;
	
	for(auto x:v){
	    cout<<x<<endl;
	}
	
	return 0;
}
