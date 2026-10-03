#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long start = 1;
    long long mod = 1000000007LL;
    for(int i = 0; i < n; i++){
        start = (start % mod) * (2);
    }
    cout << start << endl;
    return 0;    
}