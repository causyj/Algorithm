/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;
    int N;
    cin >> N;
    while(N--){
        string t;
        cin >> t;
        if(t== "push"){
            int x;
            cin >> x;
            q.push(x);
           
        }else if(t=="pop"){
            if(!q.empty()){
                cout << q.front() << '\n';
                q.pop();
            }else{
                cout << -1 << '\n';
            }
        }else if(t=="size"){
            cout << q.size() << '\n';
        }else if(t=="empty"){
            cout << q.empty() << '\n';
        }else if(t=="front"){
            if(!q.empty()){
                cout << q.front() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
        else if(t=="back"){
            if(!q.empty()){
                cout << q.back() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}