#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int S, D;
    while(cin >> S >> D){
        long int day = 1;
        
        while(day <= D){
            day += S;
            S++;
        }
        
        printf("%ld\n", S - 1);
    }

    return 0;
}
