#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int min_s = 0;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1]) min_s++;
    }
    cout << min_s;
    return 0;
}