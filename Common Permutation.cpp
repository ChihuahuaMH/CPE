#include <bits/stdc++.h>
using namespace std;

int main() {
  string x, y;

  while (getline(cin, x) && getline(cin, y)) {
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int i = 0, j = 0;

    while (1) {
      if (i > x.length() || j > y.length()) {
        break;
      }

      if (x[i] == y[j]) {
        cout << x[i];
        i++, j++;
      } else {
        x[i] < y[j] ? i++ : j++;
      }
    }

    printf("\n");
  }

  return 0;
}
