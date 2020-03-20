#include <iostream>
using namespace std;

int main() {
  int n;
  string s1, s2;
  cin >> n;

  for (int i=0; i<n; ++i) {
    cin >> s1 >> s2;
    if (s1 == s2) {
      cout << "Tie" << endl;
      continue;
    }

    if (s1 == "Rock") {
      if (s2 == "Scissors") {
        cout << "Player1" << endl;
      }
      else {
        cout << "Player2" << endl;
      }
    }
    else if (s1 == "Scissors") {
      if (s2 == "Paper") {
        cout << "Player1" << endl;
      }
      else {
        cout << "Player2" << endl;
      }
    }
    else if (s1 == "Paper") {
      if (s2 == "Rock") {
        cout << "Player1" << endl;
      }
      else {
        cout << "Player2" << endl;
      }
    }
  }
}
