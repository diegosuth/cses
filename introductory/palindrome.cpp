#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string oriword;
    cin >> oriword;
    bool originalwordisodd = false;
    if(oriword.length() % 2 == 1){
        originalwordisodd = true;
    }
    if(oriword.length() < 3){
        cout << oriword << endl;
        return 0;
    }
    map<char,int> inventoryofchar;
    bool odd = false;
    vector<pair<int,char>> letterpriority;
    for(char c : oriword){
        inventoryofchar[c]++;
    }
    bool isthereanyoddchar = false;
    for(const auto& [letter,amount]: inventoryofchar){
        letterpriority.push_back({amount,letter});
        if(amount % 2 == 1){
            isthereanyoddchar = true;
        }
    }
    if(originalwordisodd && !isthereanyoddchar){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    sort(letterpriority.begin(),letterpriority.end());
    vector<char> solution(oriword.length());
    int i = 0;
    int j = oriword.length()-1;
    while(letterpriority.size() > 0){
        if(letterpriority.back().first % 2 == 1){
            if(odd || !originalwordisodd){
                cout <<"NO SOLUTION"<< endl;
                return 0;
            }
            odd = true;
            if(letterpriority.back().first > 1){
                while(letterpriority.back().first > 1){
                    solution[i] = letterpriority.back().second;
                    solution[j] = letterpriority.back().second;
                    letterpriority.back().first -= 2;
                    i++;
                    j--;
                }
                solution[(oriword.length()/2) + 1] = letterpriority.back().second;
                letterpriority.pop_back();
            }
            else{
                solution[(oriword.length()/2) + 1] = letterpriority.back().second;
                letterpriority.pop_back();
            }
        }
        else{
            while(letterpriority.back().first > 0){
                    solution[i] = letterpriority.back().second;
                    solution[j] = letterpriority.back().second;
                    letterpriority.back().first -= 2;
                    i++;
                    j--;
                }
                letterpriority.pop_back();
            }
        }
        for(char c : solution){
            cout << c;
        }
        cout << endl;
    return 0;    
}