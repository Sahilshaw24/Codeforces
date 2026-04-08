// Problem Link: https://codeforces.com/problemset/problem/41/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1,s2;
    cin >> s1 >> s2;
    reverse(s2.begin(),s2.end());
    cout << (s1 == s2 ? "YES" : "NO");
}
