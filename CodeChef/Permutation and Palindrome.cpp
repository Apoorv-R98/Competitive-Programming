//Problem Code: PERMPAL

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char getChar(int i){
    return (char)i+97;
} 

void printPalPerStr(string s){
    
    map<char, vector<int>> mp;
    
    for(int i=0;i<s.length();i++){
        mp[s[i]].push_back(i);
    }
    
    int oddFreq = 0;
    
    for(int i=0;i<26;i++){
        if(mp[getChar(i)].size() % 2 == 1){
            oddFreq++;
        }
    }
    
    if(oddFreq>1){
        cout<<"-1";
        return;
    }
    
    int ans[s.length()];
    int start = 0;
    int end = s.length()-1;
    
    for(int i=0;i<26;i++){
        for(int j=0;j<mp[getChar(i)].size();j+=2){
            char currChar = getChar(i);
            
            if((mp[currChar].size() - j) == 1){
                ans[s.length()/2] = mp[currChar][j];
                continue;
            }
            
            ans[start] = mp[currChar][j];
            ans[end] = mp[currChar][j+1];
            start++;
            end--;
        }
    }
    
    for(int i=0;i<s.length();i++){
        cout<< ans[i] + 1<<" ";
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    printPalPerStr(s);
	    cout<<endl;
	}
	return 0;
}
