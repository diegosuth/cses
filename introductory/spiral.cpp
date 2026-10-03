#include <bits/stdc++.h>
using namespace std;
long long solution(long long y,long long x){
    long long respuesta;
    if(y > x){
        long long maximo = y-1;
        long long areasubcuadrado = maximo * maximo;
        if(y % 2 != 0){
            respuesta = areasubcuadrado + x;
        }
        else{
            respuesta = areasubcuadrado + ((2*y)-x);
        }
    }
    else{
        long long maximo = x-1;
        long long areasubcuadrado = maximo * maximo;
        if(x % 2 == 0){
            respuesta = areasubcuadrado+y;
        }
        else{
            respuesta = areasubcuadrado+((2*x)-y);
        }
    }
    return respuesta;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        long long x,y;
        cin >> y >> x;//row y col x
        cout << solution(y,x) << endl;
    }
    return 0;    
}