#include<bits/stdc++.h>

using namespace std;

long long binpowMOD(long long a, long long b, int n){ // a ^ b % n
    a % n;
    long long res = 1;
    while (b > 0){
        if (b & 1) // si b es impar
            res = (res * a) % n;
        a = (a * a) % n;
        b >>= 1; // dividimos b/2
    }
    return res;
}

int main(){
    int T; cin >> T;
    
    for(int t = 0; t < T; t++){
        int x, y, n; cin >> x >> y >> n;
        cout << binpowMOD(x, y, n) << endl;
    }

    return 0;
}