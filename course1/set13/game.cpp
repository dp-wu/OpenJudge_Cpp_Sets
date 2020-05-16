/* couldn't pass the 1000-entries test case. I'll update this file once figured out where the problem is*/


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
