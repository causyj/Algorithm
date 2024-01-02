#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    int e=0, z=0;
    int q[2000005];
    cin >> N;
    while(N--){
        string s;
        cin >> s;
        if(s=="push"){
            cin >> q[e++];
        }else if(s=="pop"){
            cout << (z == e ? -1 : q[z++]) << "\n";
        }else if(s=="size"){
            cout << e-z << "\n";
        }else if(s=="empty"){
            cout << (z==e) << "\n";
        }else if(s=="front"){
            cout << (z==e ? -1 : q[z]) << "\n";
        }else if (s=="back"){
            cout << (z==e ? -1 : q[e-1]) << "\n";
        }
    }
    
    return 0;
}