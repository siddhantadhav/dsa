
#include <iostream>
#include <algorithm>
using namespace std;

bool canFormSquare(int l1, int b1, int l2, int b2, int l3, int b3) {
    // Normalize rectangles (make sure l >= b)
    if (l1 < b1) swap(l1, b1);
    if (l2 < b2) swap(l2, b2);
    if (l3 < b3) swap(l3, b3);

    // Check all 3 rectangles have same height and sum of widths == height
    if (b1 == b2 && b2 == b3 && (l1 + l2 + l3 == b1)) return true;

    // Try to fit 2 vertically and 1 beside:
    // Sort rectangles in decreasing order of height
    pair<int, int> rects[3] = {{l1, b1}, {l2, b2}, {l3, b3}};
    sort(rects, rects + 3, [](auto &a, auto &b) {
        return a.second > b.second;
    });

    // Largest height
    int H = rects[0].second;

    // If 2 rectangles can be stacked and one spans the height
    if (rects[1].second + rects[2].second == H &&
        rects[1].first == rects[2].first &&
        rects[0].first + rects[1].first == H)
        return true;

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        if (canFormSquare(l1, b1, l2, b2, l3, b3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
