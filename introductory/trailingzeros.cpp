#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int sol = 0;
    int var = 0;
    for(int i = 5; i <= n;i+=5){
            var = i;
            while(var % 5 == 0){
                var /= 5;
                sol++;
            }
    }
    cout << sol << endl;
    return 0;    
}