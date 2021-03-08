#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    // m = month, d = day
    int testCase, m, d, sum;
    cin >> testCase;
    
    while(testCase--){
        cin >> m >> d;
        sum = 0;
        
        for(int i = 0; i < m; i++){
            sum += days[i];
        }
        
        sum += d;
        cout << week[sum % 7] << endl;
    }
    
    return 0;
}
