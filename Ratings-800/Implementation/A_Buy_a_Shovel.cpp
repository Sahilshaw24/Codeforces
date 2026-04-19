#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,y;
    cin >> x >> y;
    
    int cnt = 0, a = x;
    while(true){
        if(x % 10 == 0 || x % 10 == y) break;
        else{
            cnt++;
            x = x + a; 
        }
    }
    cout << cnt + 1;
    return 0;
}