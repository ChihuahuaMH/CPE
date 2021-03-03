#include <bits/stdc++.h>
using namespace std;

int main() {
  int testCase;
  scanf("%d", & testCase);

  while (testCase--) {
    // r = number of relative
    int r, streetNumber;
    scanf("%d", & r);

    int relative[r];
    for (streetNumber = 0; streetNumber < r; streetNumber++) {
      scanf("%d", & relative[streetNumber]);
    }

    sort(relative, relative + r);

    int mid = relative[r / 2], sum = 0;
    for (streetNumber = 0; streetNumber < r; streetNumber++) {
      sum += abs(relative[streetNumber] - mid);
    }

    printf("%d\n", sum);

  }

  return 0;
}
