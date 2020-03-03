#include <iostream>
using namespace std;

int main() {
    int days, g, s, b;
    int g_sum = 0, s_sum = 0, b_sum = 0, total = 0;

    cin >> days;

    for (int i=1; i<=days; ++i) {
      cin >> g >> s >> b;
      g_sum += g;
      s_sum += s;
      b_sum += b;
    }

    total = g_sum + s_sum + b_sum;
    cout << g_sum << ' ' << s_sum << ' ' << b_sum << ' ' << total << endl;
}
