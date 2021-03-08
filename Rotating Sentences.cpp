#include <bits/stdc++.h>
using namespace std;

int main() {
  string input[101];
  int max = 0, index = 0;

  while (getline(cin, input[index])) {

    if (input[index].length() > max) {
      max = input[index].length();
    }

    index++;
  }

  // word
  for (int i = 0; i < max; i++) {
    // line
    for (int j = index - 1; j >= 0; j--) {
    
      if(input[j].length() > i){
          cout << input[j][i];
      }else{
          cout << " ";
      }
      
    }
    cout << endl;
  }

  return 0;
}
