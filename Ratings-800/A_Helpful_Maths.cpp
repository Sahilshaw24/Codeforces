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
    for(int i=0;i<s2.size();i++){
        cout << s2[i];
        if(i != s2.size()-1)  cout << "+";
    }
    return 0;
}