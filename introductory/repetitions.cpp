#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string linea;
    getline(cin,linea);
    int repetido = 0;
    int maxrepetido = 0;
    for(int i = 1; i < linea.length();i++){
        if(linea[i] == linea[i-1]){
            repetido++;
        }
        else{
            maxrepetido = max(maxrepetido,repetido);
            repetido = 0;
        }
    }
    maxrepetido = max(maxrepetido,repetido);
    cout << maxrepetido+1 << endl;
    return 0;    
}