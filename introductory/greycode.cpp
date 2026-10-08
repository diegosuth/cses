#include <bits/stdc++.h>
using namespace std;
string dectobinary(int n,int bitquant){
    string bin = "";
    bool last0 = false;
    while(n > 0){
        int bit = n % 2;
        bin.push_back('0' + bit);
        n /= 2;
        if(n == 0){
            while(bin.length() < bitquant){
                bin += '0'; 
            }
        }
    }
    reverse(bin.begin(),bin.end());
    if(bin.length() < bitquant){
        for(int d = bin.length(); d < bitquant; d++){
            bin += "0";
        }
    }
    return bin+"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    if(n == 1){
        cout << 0 << "\n";
        cout << 1 << "\n";
        return 0;
    }
    long long amount = 1;
    for(int d = 0; d < n; d++){
        amount *= 2;
    }
    long long i = 0;
    int inverted = 0;
    long long totalblocks = amount / 4;//gotta hardcode for n = 1
    while(i<amount){
        //it goes in blocks of 00 01 11 10
        //after a normal one there is always an inverted one
        //until total blocks = 2^n-2
        //normal/inverted/next->next block normal/ next->block inverted for n = 4
        for(int d = 0; d < totalblocks;d++){
            if(d% 2 == 1){
                cout << dectobinary(i+2,n);
                cout << dectobinary(i+3,n);
                cout << dectobinary(i+1,n);
                cout << dectobinary(i,n);
                i++;
                i++;
                i++;
                i++;
                inverted--;

            }
            else{
                cout << dectobinary(i,n);//i+0
                cout << dectobinary(i+1,n);//i+1
                cout << dectobinary(i+3,n);//i+3
                cout << dectobinary(i+2,n);//i+2
                i++;
                i++;
                i++;
                i++;
                inverted++;
                inverted++;
            }
        }
    }
    return 0;    
}