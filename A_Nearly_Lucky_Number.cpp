#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(auto c : s){
        if(c == '4' || c == '7') cnt++;
        if(cnt > 7) break;
    }
    if(cnt == 4 || cnt == 7) cout << "YES";
    else cout << "NO";
}