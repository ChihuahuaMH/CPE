#include <bits/stdc++.h>
using namespace std;

int calcLength(int k) {
  int length = 1;

  while (k != 1) {
    if (k % 2 != 0) {
      k = 3 * k + 1;
    } else {
      k = k / 2;
    }

    length++;
  }

  return length;
}

int main() {
  int i, j, k, maxC;

  while (cin >> i >> j) {
    maxC = 0;
    cout << i << " " << j << " ";

    for (k = min(i, j); k <= max(i, j); k++) {
      maxC = max(maxC, calcLength(k));
    }

    cout << maxC << endl;
  }

  return 0;
}
