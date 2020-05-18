/* couldn't pass the 1000-entries test case. I'll update this file once figured out where the problem is*/
/*
1000的测试集没通过。我前后看了几遍代码还是没找到问题出在哪里。就剩三根头发了，请老师和同学们帮我康康到底是肿么肥四。

为了节省同学和老师的时间我简单解释一下代码的工作逻辑：

1. mp是一个map，它的key是战力值。排序方式是从大到小。

2. 当有新会员加入时，由于新会员的id一定比老会员的id数值大，所以在战力值与map中已有某个record的战力值相同时，插入失败跳过（以保证战力值相同情况下map中保留的record一直是id最小那个人的）。

3. 确定对手id时有以下几种状况：

    1）插入失败，直接取map中与战力值相同的record的id；

    2）插入成功，位于map最尾端，取倒数第二个record的id；

    3）插入成功，对比与前后两个人的战力值的difference， 取diff较小那个人的id； 如果相等，对比前后两人id，取id小的。
*/


#include <iostream>
#include <map>
#include <string>
using namespace std;
 
typedef map<int, int, greater<int>> Map; // <stats, id>
 
struct Match {
    int id;
    int op;
};
 
int main() {
    int n, pre, nxt, id, stats;
    cin >> n;
    ++n;
 
    Match match[n];
    match[0] = {1, 1};
 
    Map mp; // init mp
    mp[1000000000] = 1; // Facer info
 
    for (int i=1; i<n; ++i) {
        cin >> id >> stats;
        match[i].id = id;
 
        if (mp.find(stats)!=mp.end()) { // if found existing item, get id
            match[i].op = mp[stats];
            continue;
        }
        else mp[stats] = id; // insert new item if none exist in map
 
        Map::iterator p, pr, pn; // pr, pn banchmark with p
        p = mp.find(stats); // get p
        pr = p;
        pn = p;
        ++pn; // point to nxt p
        --pr; // point to pre p
 
        if (pn == mp.end()) match[i].op = pr->second; // if is the last, get pre id
        else {
            pre = (pr->first - p->first);
            nxt = (p->first - pn->first);
             
            if (nxt < pre) match[i].op = pn->second; // if nxt<pre, get nxt id
            else if (nxt == pre) { // if nxt=pre, get smaller id
                if (pr->second < pn->second) match[i].op = pr->second;
                else match[i].op = pn->second;
            }
            else match[i].op = pr->second; // if next>pre, get pre id
        }
    }
    for (int j=1; j<n; ++j) cout << match[j].id << " " << match[j].op << endl;
}
