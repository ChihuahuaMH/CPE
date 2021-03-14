#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, index = 1;
    
    while(cin >> N){
        int i, j, num[N] = {0};
        set<int> checkSum;
        
        checkSum.clear();
        
        for(i = 0; i < N; i++){
            cin >> num[i];
        }
        
        for(i = 0; i < N; i++){
            
            if(num[i] <= 0){
                break;
            }
            else if(i > 0 && num[i-1] >= num[i]){
                break;
            }
            
            for(j = 0; j < N; j++){
                checkSum.insert(num[i] + num[j]);
            }
            
        }
        
        printf("Case #%d: It is ", index);
        checkSum.size() == (N + 1) * N / 2 ? printf("a B2-Sequence.\n\n") : printf("not a B2-Sequence.\n\n");
        index++;
    }

    return 0;
}
