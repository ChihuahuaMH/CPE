#include <bits/stdc++.h>
using namespace std;

int bangla(long long int n) {
  if (n >= 10000000) {
    bangla(n / 10000000);
    printf(" kuti");
    n %= 10000000;
  }

  if (n >= 100000) {
    bangla(n / 100000);
    printf(" lakh");
    n %= 100000;
  }

  if (n >= 1000) {
    bangla(n / 1000);
    printf(" hajar");
    n %= 1000;
  }

  if (n >= 100) {
    bangla(n / 100);
    printf(" shata");
    n %= 100;
  }

  if (n) {
    printf(" %lld", n);
  }
}

int main() {
  long long int num;
  int index = 1;

  while (cin >> num) {
    printf("%4d.", index);
    num > 0 ? bangla(num) : printf(" 0");
    printf("\n");
    index++;
  }

  return 0;
}
