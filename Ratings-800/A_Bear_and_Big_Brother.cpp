#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    int years = 0;
    while(b >= a){
        a = a*3;
        b = b*2;
        years++;
    }
    cout << years;
    return 0;
}