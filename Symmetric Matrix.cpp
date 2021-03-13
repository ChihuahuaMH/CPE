#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, n, index;
    cin >> T;
    
    for(index = 1; index <= T; index++){
        cin.ignore();
        scanf("N = %d\n", &n);
        
        long long int matrix[n*n];
        int isPositive = 1, isSymmetric = 1;
        
        for(int i = 0; i < n * n; i++){
            cin >> matrix[i];
            
            if(matrix[i] < 0){
                isPositive = 0;
            }
        }
        
        if(isPositive){
            for(int i = 0; i < n * n / 2; i++){
                if(matrix[i] != matrix[n * n - i - 1]){
                    isSymmetric = 0;
                    break;
                }
            }
        }
        
        printf("Test #%d: ", index);
        isSymmetric && isPositive ? printf("Symmetric.\n") : printf("Non-symmetric.\n");
        
    }
    
    return 0;
}
