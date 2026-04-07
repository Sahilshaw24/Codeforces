#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    string s;
    for(int i=1;i<=n;i++){
        if(i % 2 == 0) s += "I love ";
        else s += "I hate ";
        
        if(i != n) s += "that ";
    }
    cout << s + "it";
    return 0;
}push