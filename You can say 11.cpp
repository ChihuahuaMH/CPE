#include <bits/stdc++.h>
using namespace std;

int main() {
  string str11;

  while (1) {
    cin >> str11;

    if (str11 == "0") {
      break;
    }

    // sum[0] is odd, sum[1] is even
    long sum[2] = {
      0,
      0
    };

    for (int i = 0; i < str11.length(); i++) {
      sum[i % 2] += str11[i] - '0';
    }

    cout << str11 << " is" << ((abs(sum[0] - sum[1]) % 11) ? " not " : " ") << "a multiple of 11." << endl;

  }

  return 0;
}
