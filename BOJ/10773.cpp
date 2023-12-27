#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    stack<int> s;

    while(N--){
        int t;
        cin >> t;
        if(t == 0 ){
            s.pop();
        }
        else{
            s.push(t);
        }
    }
    int sum=0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum ;
    return 0;
}