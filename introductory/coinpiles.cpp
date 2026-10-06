#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    //4 possible states in the automata:
    //even a even b //even a odd b // odd a even b // odd a odd b
    //x strat = a-1 b-2//y strat = a-2 b-1
    for(int i = 0; i < casos; i++) {
        int a,b;
        cin >> a >> b;
        if((a > (2*b)) || (b > (2*a)) || ((a+b) % 3 != 0)){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
    return 0;    
}