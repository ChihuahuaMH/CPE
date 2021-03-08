#include <bits/stdc++.h>
using namespace std;

int f(int n){
    int sum = 0;
    
    while(n != 0){
        sum += n % 10; 
        n /= 10;
    }
    
    return sum;
}


int main()
{
    int n;
    while(cin >> n){
        if(!n){
            break;
        }
        
        while(n >= 10){
            n = f(n);
        }
        
        printf("%d\n", n);
    }

    return 0;
}
