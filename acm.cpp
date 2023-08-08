#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define lowbit(x) ((x) & -(x))
#define all(x) begin(x), end(x)
#define fore(x, y, z) for (LL x = (y); x <= (z); x++)
#define forn(x, y, z) for (LL x = (y); x < (z); x++)
#define rofe(x, y, z) for (LL x = (y); x >= (z); x--)
#define rofn(x, y, z) for (LL x = (y); x > (z); x--)

using PII = pair<int, int>;
using LL = long long;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using vi = vector<int>;
using vl = vector<i64>;
using vs = vector<string>;
using vvi = vector<vi>;
using vp = vector<PII>;

const int N = 1e6 + 5;
// const int MOD = 998244353;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void IO() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cout << fixed << setprecision(10);
}

void solve() {}

int tmain() {
    IO();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}

/*
 */