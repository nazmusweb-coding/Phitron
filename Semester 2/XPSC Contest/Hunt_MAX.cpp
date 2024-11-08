#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    unordered_map<int, int> freq;
    priority_queue<pair<int, int>> pq;

    while (Q--) 
    {
        int query, X;
        cin >> query;

        if (query == 1) 
        {
            cin >> X;
            freq[X]++;
            pq.push({freq[X], X});
        } 
        else 
        {
            if (pq.empty()) 
            {
                cout << "empty\n";
            } 
            else 
            {
                while (!pq.empty()) 
                {
                    auto [f, val] = pq.top();
                    if (freq[val] == f) 
                    {
                        cout << val << '\n';
                        freq[val] -= max(1, freq[val] - 1);

                        pq.pop();
                        break;
                    } 
                    else 
                    {
                        pq.pop();
                    }
                }
            }
        }
    }

    return 0;
}
