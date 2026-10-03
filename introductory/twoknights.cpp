#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tam;
    cin >> tam;
    long long n = 1;
    while(n <= tam){
        long long formula = (((n * n)*((n*n)-1))/2) - (4*(n-1)*(n-2));
        cout << formula << endl;
        n++;
        }
    return 0;    
}