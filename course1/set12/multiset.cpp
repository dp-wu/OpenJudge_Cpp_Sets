#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

struct Commands {
    string instruc;
    int x;
};


int main() {
    int n;
    cin >> n;
    
    multiset<int> st;
    multiset<int> stCopy;
    Commands xList[n];
    for (int i=0; i<n; ++i) {
        cin >> xList[i].instruc >> xList[i].x;
        if (xList[i].instruc == "add") {
            st.insert(xList[i].x);
            stCopy.insert(xList[i].x);
            cout << st.count(xList[i].x) << endl;
        }
        else if (xList[i].instruc == "del") {
            cout << st.count(xList[i].x) << endl;
            st.erase(xList[i].x);
        }
        else if (xList[i].instruc == "ask") {
            cout << (stCopy.find(xList[i].x) != stCopy.end()) << " " << st.count(xList[i].x) << endl;
        }
    }
}
