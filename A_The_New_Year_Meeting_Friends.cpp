#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,y,z;
    cin >> x >> y >> z;
    
    int maxi,mini;
    if(x > y){
        if(x > z) maxi = x;
        else maxi = z;
        if(y > z) mini = z;
        else mini = y;
    }
    else{
        if(y > z) maxi = y;
        else maxi = z;
        if(x > z) mini = z;
        else mini = x;
    }
    cout << maxi - mini;
    return 0;
}