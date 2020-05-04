// A slightly better version
#include <iostream>
#include <set>
#include <string>
using namespace std;


int main() {
    int n;
    string instruc;
    cin >> n;
    
    multiset<int> st;
    multiset<int> stCopy; // this one is only for the "ask" operation
    int xList[n];
    for (int i=0; i<n; ++i) {
        cin >> instruc >> xList[i];
        if (instruc == "add") {
            st.insert(xList[i]);
            stCopy.insert(xList[i]);
            cout << st.count(xList[i]) << endl;
        }
        else if (instruc == "del") {
            cout << st.count(xList[i]) << endl;
            st.erase(xList[i]);
        }
        else if (instruc == "ask") {
            cout << (stCopy.find(xList[i]) != stCopy.end()) << " " << st.count(xList[i]) << endl;
        }
    }
}



/*
#include <iostream>
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
*/
