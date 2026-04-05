#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        int ans = n;
        if(n%2 == 0){
            ans = ans/2;
            ans--;
        }
        else ans = ans / 2;
        cout << ans << endl;
    }
    return 0;
}