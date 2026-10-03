#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    vector<long long> numbers;
    long long formula = 0;
    for(long long i = 1; i <= n; i++){
        numbers.push_back(i);
        formula += i;
    }
    if(formula % 2 != 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        long long sum = 0;
        vector<long long> firstset;
        bool cutre = false;
        long long target = formula/2;
        while(true){
            if((sum + numbers.back()) == target){
                firstset.push_back(numbers.back());
                numbers.pop_back();
                break;
            }
            else if((sum + numbers.back()) > target){
                long long numerofaltante = target-sum;
                firstset.push_back(numerofaltante);
                numbers[numerofaltante-1] = -1;
                cutre = true;
                break;
            }
            sum += numbers.back();
            firstset.push_back(numbers.back());
            numbers.pop_back();
        }
        cout << firstset.size() << endl;
        for(int i = 0; i < firstset.size();i++){
            if(i == firstset.size()-1){
                cout << firstset[i] << endl;
                break;
            }
            cout << firstset[i] << ' ';
        }
        if(cutre){
            cout << numbers.size()-1 << endl;
        }
        else{
            cout << numbers.size() << endl;
        }
        for(int i = 0; i < numbers.size();i++){
            if(numbers[i] == -1){
                continue;
            }
            if(i == numbers.size()-1){
                cout << numbers[i] << endl;
                break;
            }
            cout << numbers[i] << ' ';
        }
    }
    return 0;    
}