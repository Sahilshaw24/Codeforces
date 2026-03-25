#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    string s2;
    for(char c : s){
        if(c != '+'){
            s2 = s2 + c;
        }
    }
    sort(s2.begin(),s2.end());
    string ans;
    for(char c : s2){
        ans = ans + c;
        if(ans.size() != s.size()) ans = ans + "+";
    }
    cout << ans;
}