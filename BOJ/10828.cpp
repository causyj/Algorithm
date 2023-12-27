#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    stack<int> s;
    for(int i=0;i<N; i++){
        string c;
        cin >> c;
        if(c == "push"){
            int p;
            cin >> p;
            s.push(p);
        }
        else if(c=="pop"){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
                s.pop();

            }
        }
        else if(c=="empty"){
            cout << (int)s.empty() << '\n';
        }
        else if(c=="size"){
            cout << s.size() << '\n';
        }
        else if(c=="top"){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
            }
            
        }
    }
    return 0;
}