#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int count = 0;
    
    while(t--){
        
        string str;
        cin >> str;
        if(str == "Tetrahedron") count += 4;
        else if(str == "Cube") count += 6;
        else if(str == "Octahedron") count += 8;
        else if(str == "Dodecahedron") count += 12;
        else count += 20;
    }
    cout << count;
    return 0;
}