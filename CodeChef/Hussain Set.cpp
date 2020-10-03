//Problem Code: COOK82C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	int n,q_size;
	cin>>n>>q_size;
	ll a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a,a+n);
	std::queue<ll> q;
	int end_p = n-1;
	int cntQ=0;
	while(q_size--){
	    int currQ;
	    ll ans;
	    cin>>currQ;
	    for(;cntQ<currQ;cntQ++){
	        if(end_p>=0 && (q.empty() || a[end_p]>=q.front())){
	            ans = a[end_p];
	            end_p--;
	        }else{
	            ans = q.front();
	            q.pop();
	        }
	        q.push(ans/2);
	    }
	    std::cout << ans << std::endl;
	}
	return 0;
}
