#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while(true){
        n = n + 1;
        string s = to_string(n);
        set<char> stt(s.begin(),s.end());
        if(stt.size() == s.size()){
            cout << n;
            break;
        }
    }
    return 0;
}