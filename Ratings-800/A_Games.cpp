// Problem Link: https://codeforces.com/problemset/problem/268/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        cin >> b[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i] == b[j]) ans++;
        }
    }
    cout << ans;
}