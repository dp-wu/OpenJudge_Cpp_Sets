//2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。
//现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。

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
