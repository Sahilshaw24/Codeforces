#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int upper = 0,lower=0;
    for(char ch :s){
        if(('a' - ch) > 0){
            upper++;
        }
        else lower++;
    }
    if(lower >= upper){
        for (char &c : s) c = tolower(c);
    }
    else{
        for (char &c : s) c = toupper(c);
    }
    cout << s;
}