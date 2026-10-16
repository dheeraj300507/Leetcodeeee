class Solution {
public:
    int sumCounts(vector<int>& nums) {
        const long long MOD = 1e9 + 7;
        int n = nums.size();

        vector<long long> sum(4 * n), sq(4 * n), lazy(4 * n);
        unordered_map<int, int> last;
        long long ans = 0;

        auto update = [&](auto&& self, int node, int left, int right,
                          int ql, int qr) -> void {
            if (ql <= left && right <= qr) {
                long long len = right - left + 1;
                sq[node] = (sq[node] + 2 * lazy[node] * sum[node]
                           + len * lazy[node] % MOD * lazy[node]) % MOD;
                sum[node] = (sum[node] + len * lazy[node]) % MOD;
                lazy[node] = 0;
            }

            if (left == right) return;

            int mid = (left + right) / 2;
            if (ql <= mid)
                self(self, node * 2, left, mid, ql, qr);
            if (qr > mid)
                self(self, node * 2 + 1, mid + 1, right, ql, qr);

            sum[node] = (sum[node * 2] + sum[node * 2 + 1]) % MOD;
            sq[node] = (sq[node * 2] + sq[node * 2 + 1]) % MOD;
        };

        auto add = [&](auto&& self, int node, int left, int right,
                       int ql, int qr, long long val) -> void {
            if (ql > right || qr < left) return;

            if (ql <= left && right <= qr) {
                long long len = right - left + 1;
                sq[node] = (sq[node] + 2 * val * sum[node]
                           + len * val % MOD * val) % MOD;
                sum[node] = (sum[node] + len * val) % MOD;
                lazy[node] = (lazy[node] + val) % MOD;
                return;
            }

            int mid = (left + right) / 2;

            if (lazy[node]) {
                long long val = lazy[node];
                for (int child : {node * 2, node * 2 + 1}) {
                    int l = child == node * 2 ? left : mid + 1;
                    int r = child == node * 2 ? mid : right;
                    long long len = r - l + 1;
                    sq[child] = (sq[child] + 2 * val * sum[child]
                                + len * val % MOD * val) % MOD;
                    sum[child] = (sum[child] + len * val) % MOD;
                    lazy[child] = (lazy[child] + val) % MOD;
                }
                lazy[node] = 0;
            }

            self(self, node * 2, left, mid, ql, qr, val);
            self(self, node * 2 + 1, mid + 1, right, ql, qr, val);

            sum[node] = (sum[node * 2] + sum[node * 2 + 1]) % MOD;
            sq[node] = (sq[node * 2] + sq[node * 2 + 1]) % MOD;
        };

        for (int right = 0; right < n; right++) {
            int left = last.count(nums[right]) ? last[nums[right]] + 1 : 0;
            add(add, 1, 0, n - 1, left, right, 1);
            last[nums[right]] = right;
            ans = (ans + sq[1]) % MOD;
        }

        return ans;
    }
};