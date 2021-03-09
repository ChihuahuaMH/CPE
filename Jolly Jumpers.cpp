#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;

    while(cin >> n){
        int sequence[n] = {0}, check[n] = {0};
        bool jolly = true;
        
       for(i = 0; i < n; i++){
           cin >> sequence[i];
           
           if(i > 0){
               int d = abs(sequence[i] - sequence[i - 1]);
               
               if(d && d < n){
                   check[d]++;
                   
                   if(check[d] > 1){
                       jolly = false;
                   }
                   
               }else{
                   jolly = false;
               }
           }
       }
       
       jolly ? printf("Jolly\n") : printf("Not jolly\n");
        
    }

    return 0;
}
