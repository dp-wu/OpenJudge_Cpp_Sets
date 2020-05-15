#include <iostream>
#include <set>
#include <string>
using namespace std;


struct Member {
    int id;
    int stats;
};
struct Rule {
    bool operator() (const Member &st1, const Member &st2) const {
        if (st1.stats != st2.stats) return st1.stats > st2.stats;
        else return st1.id < st2.id;
    }
};

int main() {
    int n, previous, next;
    cin >> n;
    n++;
    
    Member match[n], member;
    match[0] = {1, 1};
    
    multiset<Member, Rule> memList;
    multiset<Member, Rule>::iterator p, pp, pn;
    memList.insert({1, 1000000000});
    for (int i=1; i<n; ++i) {
        cin >> member.id >> member.stats;
        //memList.insert(member);
        p = memList.insert(member);
        
        match[i].id = p->id;
        if (p == --memList.end()) match[i].stats = (--p)->id;
        else if (p->id == member.id) {
            pp = p;
            pn = p;

            previous = ((--pp)->stats) - (p->stats);
            next = (p->stats) - ((++pn)->stats);

            if (previous >= next) match[i].stats = pn->id;
            else match[i].stats = pp->id;
        }
    }
    for (int j=1; j<n; ++j) cout << match[j].id << " " << match[j].stats << endl;
}
