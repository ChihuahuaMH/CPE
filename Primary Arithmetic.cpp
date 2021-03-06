#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, carry, carryTmp;

  while (cin >> x >> y) {
    if (x == 0 && y == 0) {
      break;
    }

    carry = 0;
    carryTmp = 0;

    while (x || y) {

      if ((x % 10) + (y % 10) + carryTmp > 9) {
        carry++;
        carryTmp = 1;
      } else {
        carryTmp = 0;
      }

      x /= 10;
      y /= 10;
    }

    if (carry) {
      printf("%d carry operation", carry);
      carry > 1 ? printf("s.\n") : printf(".\n");
    } else {
      printf("No carry operation.\n");
    }

  }

  return 0;
}
