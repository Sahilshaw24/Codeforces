#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        if(str[0] == '+' || str[str.size()-1] =='+'){
            count++;
        }
        else{
            count--;
        }
    }
    cout << count;
}