#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int i;
    cin >> i;
    int max = i,min = i,cnt = 0;
    while(n--){
        cin >> i;
        if(max < i) max = i,cnt++;
        if(min > i) min = i,cnt++;
    }
    cout << cnt;
    return 0;
}