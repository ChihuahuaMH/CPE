#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S;
    cin >> S;
    
    while(S--){
        int N, i;
        double p;
        cin >> N >> p >> i;
        double q = 1 - p;
        
        // (q^i-1 * p) / (1 - q^n)
        p ? printf("%.4f\n", pow(q, i - 1) * p / (1 - pow(q, N)) ) : printf("0.0000\n");
       
    }

    return 0;
}
