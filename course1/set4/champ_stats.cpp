#include <iostream>
using namespace std;

int main() {
  int M, N, X;
  int num_elements = 0, num_n = 0;
  cin >> M >> N >> X;

  while (true) {
    if ((N * X < M) || (N > M + 1)) {
      cout << N << endl;
      break;
    }
    if (M % N != 0) {
      X -= ((M / N) + 1);
    }
    else {
      X -= M / N;
    }
    N += (M / N);
  }
}
