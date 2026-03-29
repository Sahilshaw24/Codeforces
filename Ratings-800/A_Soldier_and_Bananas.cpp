#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int cost,dollar,bananas;
    cin >> cost >> dollar >> bananas;
    int final_cost=0;
    int count = 1;
    while(bananas){
        final_cost = final_cost + cost*count;
        count++;
        bananas--;
    }
    if(final_cost > dollar) cout << final_cost - dollar;
    else cout << 0;
}