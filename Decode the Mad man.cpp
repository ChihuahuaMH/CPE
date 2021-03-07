#include <bits/stdc++.h>
using namespace std;

int main() {
  const char kb[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
  string input;

  while (getline(cin, input)) {
    for (int i = 0; i < input.length(); i++) {
      if (isspace(input[i])) {
        printf(" ");
      } else {
        for (int j = 0; j < strlen(kb); j++) {
          if (input[i] == kb[j]) {
            printf("%c", kb[j-2]);
            break;
          }
        }
      }

    }
    printf("\n");
  }

  return 0;
}
