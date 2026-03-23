#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin >> n;
    cin >> k;
    vector<int> score(n);
    for(int i=0;i<n;i++){
        cin >> score[i];
    }
    int ans = 0,k_place_score = score[k-1];
    for(int i=0;i<n;i++){
        if(score[i] >= k_place_score && score[i] > 0){
            ans++;
        }
    }
    cout << ans;
}