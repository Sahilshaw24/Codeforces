#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    
    int cnt = 0;
    while(n--){
        k += (cnt+1)*5;
        if(k <= 240) cnt++;
        else break;
    }
    cout << cnt;
    return 0;
}