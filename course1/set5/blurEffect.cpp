/*
描述
给定n行m列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理：

1. 四周最外侧的像素点灰度值不变；

2. 中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。

输入
第一行包含两个整数n和m，表示图像包含像素点的行数和列数。1 <= n <= 100，1 <= m <= 100。
接下来n行，每行m个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，每个元素均在0~255之间。
输出
n行，每行m个整数，为模糊处理后的图像。相邻两个整数之间用单个空格隔开。
*/


#include <iostream>
using namespace std;

int main() {
  int rows, cols;
  scanf("%d%d", &rows, &cols);

  double matrix[rows][cols];
  double newMatrix[rows][cols];

  //construct matrix
  for (int r=0; r<rows; ++r) {
    for (int c=0; c<cols; ++c) {
      scanf("%lf", &matrix[r][c]);
      newMatrix[r][c] = matrix[r][c];
    }
  }

  for (int i=1; i<rows-1; ++i) {
    for (int j=1; j<cols-1; ++j) {
      newMatrix[i][j] = (matrix[i-1][j]+matrix[i+1][j]+matrix[i][j-1]+matrix[i][j+1]+matrix[i][j])/5;
    }
  }

  for (int r=0; r<rows; ++r) {
    for (int c=0; c<cols; ++c) {
      printf("%.0f ", newMatrix[r][c]);
    }
    printf("\n");
  }
}
