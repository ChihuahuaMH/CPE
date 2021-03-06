#include <bits/stdc++.h>
using namespace std;

int main() {
  // A ~ Z = 26
  // ASCII is int count[90] and count[toupper(word)]
  int count[26] = {}, length = 0;
  char word;

  while (cin >> word) {
    length++;
    count[toupper(word) - 'A']++;
  }

  while(--length){
    for (word = 'A'; word <= 'Z'; word++) {
      if (count[word - 'A'] == length) {
        printf("%c %d\n", word, length);
      }
    }
  }

  return 0;
}
