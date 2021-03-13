#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, d, x, y;
    cin >> n;
    
    while(n--){
        cin >> s >> d;
        
        x = (s + d) / 2;
        y = (s - d) / 2;
        
        if(x+y==s && x-y==d && y>=0){
            printf("%d %d\n", x, y);
        }else{
            printf("impossible\n");
        }
    }

    return 0;
}
