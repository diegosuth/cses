#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n-1;i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    long long numerofaltante = (n*(n+1))/2;
    for(int i = 0; i < n-1;i++){
        numerofaltante = numerofaltante - nums[i];
    }
    cout << numerofaltante << endl;
    return 0;    
}