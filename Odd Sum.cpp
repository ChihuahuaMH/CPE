#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, index = 1, a, b;

  cin >> T;
  while (T--) {
    cin >> a >> b;
    int sum = 0;

    for (a; a <= b; a++) {
      a % 2 ? sum += a : sum;
    }

    cout << "Case " << index << ": " << sum << endl;
    index++;

  }

  return 0;
}
