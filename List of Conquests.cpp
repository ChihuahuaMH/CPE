#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  map < string, int > record;
  map < string, int > ::iterator i;

  while (cin >> n) {

    while (n--) {
      string country, name;
      cin >> country;
      record[country]++;
      getline(cin, name);
    }

    for (i = record.begin(); i != record.end(); i++) {
      cout << i -> first << " " << i -> second << endl;
    }
  }

  return 0;
}
