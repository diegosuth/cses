#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for(int i = 2; i <= n;i+=2){
        cout << i << ' ';
    }
    for(int i = 1; i <= n; i+=2){
        if(n % 2 == 0 && i == n-1){
            cout << i << endl;
            break;
        }
        else if(i == n){
            cout << i << endl;
            break;
        }
        cout << i << ' ';
    }
    return 0;    
}