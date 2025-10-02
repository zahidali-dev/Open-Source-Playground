#include <bits/stdc++.h>
using namespace std;

int main() {
    // ----------- VECTOR -----------
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << "\nSize: " << v.size() << "\n\n";

    // ----------- MAP -----------
    map<string, int> mp;
    mp["apple"] = 3;
    mp["banana"] = 5;
    mp["mango"] = 2;

    cout << "Map elements:\n";
    for (auto& p : mp) {
        cout << p.first << " -> " << p.second << "\n";
    }
    cout << "\n";

    // ----------- SET -----------
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(5); // Duplicate ignored
    s.insert(9);

    cout << "Set elements: ";
    for (int x : s) cout << x << " ";
    cout << "\n\n";

    // ----------- QUEUE -----------
    queue<string> q;
    q.push("RAJ");
    q.push("AKASH");
    q.push("NOOB");

    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    return 0;
}
