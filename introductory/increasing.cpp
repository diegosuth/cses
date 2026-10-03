#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> nums(n);
    long long maxvalue = 0;
    long long pts = 0;
    for(int i =0 ; i < n; i++){
        cin >> nums[i];
        maxvalue = max(nums[i],maxvalue);
        if(nums[i] >= maxvalue){
            continue;
        }
        pts += (maxvalue-nums[i]);
        nums[i] += (maxvalue-nums[i]);
    }
    cout << pts << endl;
    return 0;    
}