#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    vector<int> arr(t,0);
    for(int i=0;i<t;i++){
        cin >> arr[i]; 
    }
    
    int count = 0,pol = 0;
    for(int i=0;i<t;i++){
        if(arr[i] == -1 && pol == 0) count++;
        else if(arr[i] > 0) pol += arr[i];
        else pol--;
    }
    cout << count;
    return 0;
}