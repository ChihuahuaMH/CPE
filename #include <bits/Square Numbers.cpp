#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    
    while(cin >> a >> b){
        int sqrtNum, count;
        
        if(a == 0 && b == 0){
            break;
        }
        
        count = 0;
        
        for(int i = a; i <= b ; i++){
            sqrtNum = sqrt(i);
            
            if(sqrtNum * sqrtNum == i){
                count++;
            }
        }
        
        printf("%d\n", count);
    }

    return 0;
}
