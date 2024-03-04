

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> drugs;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        drugs.push_back(make_pair(a, b));
    }
    int q;
    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }

    sort(drugs.begin(), drugs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;  // 根据功效值降序排序
        });

    for (int query : queries) {
        int max_effect = -1;
        for (auto drug : drugs) {
            int a = drug.first;
            int b = drug.second;
            if (a <= query) {  // 疼痛程度不超过x
                max_effect = max(max_effect, b);
            }
        }
        cout << max_effect << endl;
    }

    return 0;
}
