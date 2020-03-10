#include <iostream>
using namespace std;


int main() {
  int rows, cols;
  cin >> rows >>cols;

  int matrix[rows][cols];

  //construct matrix
  for (int r=0; r<rows; ++r) {
    for (int c=0; c<cols; ++c) {
      cin >> matrix[r][c];
    }
  }
  cout << "================" << endl;
  for (int r=0; r<cols; ++r) {
    for (int c=0; c<rows; ++c) {
      cout << matrix[c][r] << " ";
    }
    cout << endl;
  }
}
