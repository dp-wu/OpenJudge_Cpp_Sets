/*
描述
给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25

输入
输入包含一个5行5列的矩阵
输出
如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"
*/

//#include <iomanip>
#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

int main() {
  int matrix[MAX_SIZE][MAX_SIZE];
  int row=0, rowMax, colMin, indr, indc;
  bool haveFound = false;

  // construct matrix
  for (int i=0; i<MAX_SIZE; ++i) {
    for (int j=0; j<MAX_SIZE; ++j) {
      cin >> matrix[i][j];
    }
  }

  while (row < MAX_SIZE) {
    // initialize params
    indc = 0;
    indr = row;

    rowMax = matrix[row][0];
    for (int c=0; c<MAX_SIZE; ++c){
      if (matrix[row][c] > rowMax) {
        indc = c;
        rowMax = matrix[row][indc];
      }
    }

    colMin = rowMax;
    for (int r=0; r<MAX_SIZE; ++r) {
      if (matrix[r][indc] < rowMax) {
        indr = r;
        colMin = matrix[indr][indc];
      }
    }

    if (colMin == rowMax) {
      haveFound = true;
      break;
    }
    ++row;
  }

  if (haveFound) {
    cout << indr+1 << " " << indc+1 << " " << colMin << endl;
  }
  else {
    cout << "not found" << endl;
  }
}
