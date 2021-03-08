#include <bits/stdc++.h>
using namespace std;

int main() {
  string input;
  bool flag = true;

  while (getline(cin, input)) {

    for (int i = 0; i < input.length(); i++) {

      if (input[i] == '"') {
        flag ? printf("``") : printf("''");
        flag = !flag;
      } else {
        cout << input[i];
      }
    }
    printf("\n");
  }

  return 0;
}
