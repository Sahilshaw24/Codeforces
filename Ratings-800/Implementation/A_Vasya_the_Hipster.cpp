#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int red,blue;
    cin >> red >> blue;
    
    int diffPair = 0, samePair = 0;
    while(true){
        if(red && blue){
            diffPair++;
            red--;
            blue--;
        }
        else if(red > 1){
            samePair++;
            red -= 2;
        }
        else if(blue > 1){
            samePair++;
            blue -= 2;
        }
        else break;
    }
    
    cout << diffPair << " " << samePair << endl;
    return 0;
}