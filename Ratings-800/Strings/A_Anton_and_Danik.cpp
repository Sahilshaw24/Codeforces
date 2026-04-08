// Problem Link: https://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(auto c : s){
        if(c == 'A') cnt++;
        else cnt--;
    }
    if(cnt > 0) cout << "Anton";
    else if(cnt == 0) cout << "Friendship";
    else cout << "Danik";
}