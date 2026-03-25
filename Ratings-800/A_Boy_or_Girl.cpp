#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    set<int> stt;
    for(auto it : s){
        stt.insert(it);
    }
    if((stt.size()) % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}