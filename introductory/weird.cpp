#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    cout << n << ' ';
    while(true){
        if(n <=1){
            cout << 1 << endl;
            break;
        }
        if(n % 2 == 0){
            n /=2 ;
            cout << n;
        }
        else{
            n = (n * 3) + 1;
            cout << n;
        }
        if(n <=1){
            break;
        }
        cout << ' ';
    }
    return 0;    
}